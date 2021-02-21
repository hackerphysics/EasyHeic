#include "HeicUtils.h"

void loadHeicImage(std::string input_filename, const uint8_t* data, int& len) {
	heif_context* ctx = heif_context_alloc();
	heif_context_read_from_file(ctx, input_filename.c_str(), nullptr);

	// get a handle to the primary image
	heif_image_handle* handle;
	heif_context_get_primary_image_handle(ctx, &handle);

	// decode the image and convert colorspace to RGB, saved as 24bit interleaved
	heif_image* img;
	heif_decode_image(handle, &img, heif_colorspace_RGB, heif_chroma_interleaved_RGB, nullptr);
	data = heif_image_get_plane_readonly(img, heif_channel_interleaved, &len);
}