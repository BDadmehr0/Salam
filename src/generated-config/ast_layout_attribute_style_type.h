// ----------- BEGIN AUTO GENERATED ----------- //
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WIDTH, "WIDTH", "width", "عرض", "width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_HEIGHT, "HEIGHT", "height", "ارتفاع", "height", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ACCENT_COLOR, "ACCENT_COLOR", "accent_color", "رنگ برجسته", "accent-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_APPEARANCE, "APPEARANCE", "appearance", "ظاهر", "appearance", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_appearance, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ASPECT_RATIO, "ASPECT_RATIO", "aspect_ratio", "نسبت ابعاد", "aspect-ratio", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_aspect_ratio, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKDROP_FILTER, "BACKDROP_FILTER", "backdrop_filter", "فیلتر پس‌زمینه", "backdrop-filter", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKDROP_FILTER, "BACKDROP_FILTER", "backdrop_filter", "فیلتر پس زمینه", "backdrop-filter", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKFACE_VISIBILITY, "BACKFACE_VISIBILITY", "backface_visibility", "مشاهده‌پذیری پشت‌نما", "backface-visibility", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_backface_visibility, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKFACE_VISIBILITY, "BACKFACE_VISIBILITY", "backface_visibility", "مشاهده پذیری پشت‌نما", "backface-visibility", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_backface_visibility, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKFACE_VISIBILITY, "BACKFACE_VISIBILITY", "backface_visibility", "مشاهده پذیری پشت نما", "backface-visibility", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_backface_visibility, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BLOCK_SIZE, "BLOCK_SIZE", "block_size", "اندازه بلوک", "block-size", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_block_size, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_IMAGE, "BACKGROUND_IMAGE", "background_image", "تصویر پس‌زمینه", "background-image", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_image, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_IMAGE, "BACKGROUND_IMAGE", "background_image", "تصویر پس‌ زمینه", "background-image", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_image, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_ATTACHMENT, "BACKGROUND_ATTACHMENT", "background_attachment", "پیوست تصویر پس‌زمینه", "background-attachment", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_background_attachment, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_ATTACHMENT, "BACKGROUND_ATTACHMENT", "background_attachment", "پیوست تصویر پس‌ زمینه", "background-attachment", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_background_attachment, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_BLEND_MODE, "BACKGROUND_BLEND_MODE", "background_blend_mode", "حالت ترکیب پس‌زمینه", "background-blend-mode", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_background_blend_mode, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_BLEND_MODE, "BACKGROUND_BLEND_MODE", "background_blend_mode", "حالت ترکیب پس زمینه", "background-blend-mode", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_background_blend_mode, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_CLIP, "BACKGROUND_CLIP", "background_clip", "برش پس‌زمینه", "background-clip", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_background_clip, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_CLIP, "BACKGROUND_CLIP", "background_clip", "برش پس زمینه", "background-clip", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_background_clip, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_COLOR, "BACKGROUND_COLOR", "background_color", "رنگ پس‌زمینه", "background-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, ast_layout_allowed_style_list_background_clip, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_COLOR, "BACKGROUND_COLOR", "background_color", "رنگ پس زمینه", "background-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, ast_layout_allowed_style_list_background_clip, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_ORIGIN, "BACKGROUND_ORIGIN", "background_origin", "مبدا پس‌زمینه", "background-origin", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_background_origin, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_ORIGIN, "BACKGROUND_ORIGIN", "background_origin", "مبدا پس زمینه", "background-origin", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_background_origin, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_BASIS, "FLEX_BASIS", "flex_basis", "مبنای انعطاف", "flex-basis", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_flex_basis, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION, "BACKGROUND_POSITION", "background_position", "موقعیت پس‌زمینه", "background-position", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_position_x, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION, "BACKGROUND_POSITION", "background_position", "موقعیت پس‌ زمینه", "background-position", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_position_x, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION_X, "BACKGROUND_POSITION_X", "background_position_x", "موقعیت افقی پس‌زمینه", "background-position-x", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_position_x, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION_X, "BACKGROUND_POSITION_X", "background_position_x", "موقعیت افقی پس‌ زمینه", "background-position-x", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_position_x, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION_Y, "BACKGROUND_POSITION_Y", "background_position_y", "موقعیت عمودی پس‌زمینه", "background-position-y", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_position_x, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION_Y, "BACKGROUND_POSITION_Y", "background_position_y", "موقعیت عمودی پس‌ زمینه", "background-position-y", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_position_x, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_REPEAT, "BACKGROUND_REPEAT", "background_repeat", "تکرار پس‌زمینه", "background-repeat", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_repeat, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_REPEAT, "BACKGROUND_REPEAT", "background_repeat", "تکرار پس‌ زمینه", "background-repeat", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_repeat, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_SIZE, "BACKGROUND_SIZE", "background_size", "اندازه پس‌زمینه", "background-size", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_size, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_SIZE, "BACKGROUND_SIZE", "background_size", "اندازه پس‌ زمینه", "background-size", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_background_size, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_RADIUS, "BORDER_RADIUS", "border_radius", "گردی", "border-radius", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER, "BORDER", "border", "مرز", "border", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_END_COLOR, "BORDER_BLOCK_END_COLOR", "border_block_end_color", "رنگ مرز انتهایی بلوک", "border-block-end-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_END_STYLE, "BORDER_BLOCK_END_STYLE", "border_block_end_style", "سبک مرز انتهایی بلوک", "border-block-end-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_block_end_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_END_WIDTH, "BORDER_BLOCK_END_WIDTH", "border_block_end_width", "عرض مرز انتهایی بلوک", "border-block-end-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_border_block_end_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_START_COLOR, "BORDER_BLOCK_START_COLOR", "border_block_start_color", "رنگ مرز ابتدایی بلوک", "border-block-start-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_START_STYLE, "BORDER_BLOCK_START_STYLE", "border_block_start_style", "رنگ مرز ابتدایی بلوک", "border-block-start-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_block_start_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_START_WIDTH, "BORDER_BLOCK_START_WIDTH", "border_block_start_width", "عرض مرز ابتدایی بلوک", "border-block-start-width", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_block_start_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_COLOR, "BORDER_BOTTOM_COLOR", "border_bottom_color", "رنگ مرز پایین", "border-bottom-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, ast_layout_allowed_style_list_border_block_start_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_LEFT_RADIUS, "BORDER_BOTTOM_LEFT_RADIUS", "border_bottom_left_radius", "گردی پایین چپ", "border-bottom-left-radius", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_RIGHT_RADIUS, "BORDER_BOTTOM_RIGHT_RADIUS", "border_bottom_right_radius", "گردی پایین راست", "border-bottom-right-radius", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_STYLE, "BORDER_BOTTOM_STYLE", "border_bottom_style", "سبک مرز پایین", "border-bottom-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_bottom_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_WIDTH, "BORDER_BOTTOM_WIDTH", "border_bottom_width", "عرض مرز پایین", "border-bottom-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_border_bottom_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_COLLAPSE, "BORDER_COLLAPSE", "border_collapse", "ادغام مرز", "border-collapse", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_collapse, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_COLLAPSE, "BORDER_COLLAPSE", "border_collapse", "ادغام مرز ها", "border-collapse", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_collapse, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_COLLAPSE, "BORDER_COLLAPSE", "border_collapse", "ادغام مرزها", "border-collapse", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_collapse, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_END_END_RADIUS, "BORDER_END_END_RADIUS", "border_end_end_radius", "گردی انتها", "border-end-end-radius", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_END_START_RADIUS, "BORDER_END_START_RADIUS", "border_end_start_radius", "گردی شروع", "border-end-start-radius", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_OUTSET, "BORDER_IMAGE_OUTSET", "border_image_outset", "برآمدگی تصویر مرز", "border-image-outset", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_REPEAT, "BORDER_IMAGE_REPEAT", "border_image_repeat", "تکرار تصویر مرز", "border-image-repeat", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_image_repeat, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_SLICE, "BORDER_IMAGE_SLICE", "border_image_slice", "برش تصویر مرز", "border-image-slice", AST_LAYOUT_ATTRIBUTE_FILTER_NUMBER, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_SOURCE, "BORDER_IMAGE_SOURCE", "border_image_source", "منبع تصویر مرز", "border-image-source", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_image_source, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_WIDTH, "BORDER_IMAGE_WIDTH", "border_image_width", "عرض تصویر مرز", "border-image-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_border_image_width, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_END_COLOR, "BORDER_INLINE_END_COLOR", "border_inline_end_color", "رنگ مرز انتهایی خطی", "border-inline-end-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_END_STYLE, "BORDER_INLINE_END_STYLE", "border_inline_end_style", "سبک مرز انتهایی خطی", "border-inline-end-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_inline_end_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_END_WIDTH, "BORDER_INLINE_END_WIDTH", "border_inline_end_width", "عرض مرز انتهایی خطی", "border-inline-end-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_START_COLOR, "BORDER_INLINE_START_COLOR", "border_inline_start_color", "رنگ مرز ابتدایی خطی", "border-inline-start-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_START_STYLE, "BORDER_INLINE_START_STYLE", "border_inline_start_style", "سبک مرز ابتدایی خطی", "border-inline-start-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_inline_start_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_START_WIDTH, "BORDER_INLINE_START_WIDTH", "border_inline_start_width", "عرض مرز ابتدایی خطی", "border-inline-start-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_LEFT_COLOR, "BORDER_LEFT_COLOR", "border_left_color", "رنگ مرز چپ", "border-left-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_LEFT_STYLE, "BORDER_LEFT_STYLE", "border_left_style", "سبک مرز چپ", "border-left-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_left_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_LEFT_WIDTH, "BORDER_LEFT_WIDTH", "border_left_width", "عرض مرز چپ", "border-left-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_RIGHT_COLOR, "BORDER_RIGHT_COLOR", "border_right_color", "رنگ مرز راست", "border-right-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_RIGHT_STYLE, "BORDER_RIGHT_STYLE", "border_right_style", "سبک مرز راست", "border-right-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_right_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_RIGHT_WIDTH, "BORDER_RIGHT_WIDTH", "border_right_width", "عرض مرز راست", "border-right-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_SPACING, "BORDER_SPACING", "border_spacing", "فاصله مرز", "border-spacing", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_START_END_RADIUS, "BORDER_START_END_RADIUS", "border_start_end_radius", "گردی ابتدا و انتها", "border-start-end-radius", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_START_START_RADIUS, "BORDER_START_START_RADIUS", "border_start_start_radius", "شعاع ابتدایی شروع مرز", "border-start-start-radius", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_COLOR, "BORDER_TOP_COLOR", "border_top_color", "رنگ مرز بالا", "border-top-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_LEFT_RADIUS, "BORDER_TOP_LEFT_RADIUS", "border_top_left_radius", "گردی بالا چپ", "border-top-left-radius", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_RIGHT_RADIUS, "BORDER_TOP_RIGHT_RADIUS", "border_top_right_radius", "گردی بالا راست", "border-top-right-radius", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_STYLE, "BORDER_TOP_STYLE", "border_top_style", "سبک مرز بالا", "border-top-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_border_top_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_WIDTH, "BORDER_TOP_WIDTH", "border_top_width", "عرض مرز بالا", "border-top-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_border_top_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BOTTOM, "BOTTOM", "bottom", "پایین", "bottom", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_bottom, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BOX_SIZING, "BOX_SIZING", "box_sizing", "نوع اندازه‌گیری جعبه", "box-sizing", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_box_sizing, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BOX_SIZING, "BOX_SIZING", "box_sizing", "نوع اندازه گیری جعبه", "box-sizing", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_box_sizing, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BOX_SHADOW, "BOX_SHADOW", "box_shadow", "سایه جعبه", "box-shadow", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BREAK_INSIDE, "BREAK_INSIDE", "break_inside", "شکست درون", "break-inside", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_break_inside, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BREAK_BEFORE, "BREAK_BEFORE", "break_before", "شکست قبل", "break-before", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_break_before, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BREAK_AFTER, "BREAK_AFTER", "break_after", "شکست بعد", "break-after", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_break_after, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CAPTION_SIDE, "CAPTION_SIDE", "caption_side", "موقعیت عنوان", "caption-side", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_caption_side, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CARET_COLOR, "CARET_COLOR", "caret_color", "رنگ نشانگر متنی", "caret-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CLEAR, "CLEAR", "clear", "پاک‌سازی", "caret-color", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_clear, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CLEAR, "CLEAR", "clear", "پاک سازی", "caret-color", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_clear, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CLIP_PATH, "CLIP_PATH", "clip_path", "مسیر برش", "clip-path", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_clip_path, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CLIP_RULE, "CLIP_RULE", "clip_rule", "قاعده برش", "clip-rule", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_clip_rule, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR, "COLOR", "color", "رنگ", "color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_INTERPOLATION, "COLOR_INTERPOLATION", "color_interpolation", "درهم‌آمیزی رنگ", "color-interpolation", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_color_interpolation, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_INTERPOLATION, "COLOR_INTERPOLATION", "color_interpolation", "درهم آمیزی رنگ", "color-interpolation", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_color_interpolation, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_INTERPOLATION_FILTERS, "COLOR_INTERPOLATION_FILTERS", "color_interpolation_filters", "درهم‌آمیزی رنگ فیلترها", "color-interpolation-filters", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_color_interpolation_filters, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_INTERPOLATION_FILTERS, "COLOR_INTERPOLATION_FILTERS", "color_interpolation_filters", "درهم آمیزی رنگ فیلترها", "color-interpolation-filters", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_color_interpolation_filters, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_SCHEME, "COLOR_SCHEME", "color_scheme", "طرح رنگ", "color-scheme", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_color_scheme, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_COUNT, "COLUMN_COUNT", "column_count", "تعداد ستون‌ها", "column-count", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, ast_layout_allowed_style_list_column_count, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_COUNT, "COLUMN_COUNT", "column_count", "تعداد ستون‌ ها", "column-count", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, ast_layout_allowed_style_list_column_count, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_FILL, "COLUMN_FILL", "column_fill", "پر کردن ستون‌ها", "column-fill", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_column_fill, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_FILL, "COLUMN_FILL", "column_fill", "پر کردن ستون ها", "column-fill", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_column_fill, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_GAP, "COLUMN_GAP", "column_gap", "فاصله بین ستون‌ها", "column-gap", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_GAP, "COLUMN_GAP", "column_gap", "فاصله بین ستون‌ ها", "column-gap", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_RULE_COLOR, "COLUMN_RULE_COLOR", "column_rule_color", "رنگ خط افقی ستون", "column-rule-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_RULE_STYLE, "COLUMN_RULE_STYLE", "column_rule_style", "سبک خط افقی ستون", "column-rule-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_column_rule_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_RULE_WIDTH, "COLUMN_RULE_WIDTH", "column_rule_width", "عرض خط افقی ستون", "column-rule-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_SPAN, "COLUMN_SPAN", "column_span", "گستردگی ستون‌ها", "column-span", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_column_span, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_SPAN, "COLUMN_SPAN", "column_span", "گستردگی ستون ها", "column-span", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_column_span, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMNS, "COLUMNS", "columns", "ستون‌ها", "columns", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMNS, "COLUMNS", "columns", "ستون‌ ها", "columns", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN, "CONTAIN", "contain", "حاوی بودن", "contain", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_contain, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_BLOCK_SIZE, "CONTAIN_INTRINSIC_BLOCK_SIZE", "contain_intrinsic_block_size", "اندازه بلوک ذاتی", "contain-intrinsic-block-size", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_contain_intrinsic_block_size, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_HEIGHT, "CONTAIN_INTRINSIC_HEIGHT", "contain_intrinsic_height", "ارتفاع ذاتی", "contain-intrinsic-height", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_contain_intrinsic_height, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_INLINE_SIZE, "CONTAIN_INTRINSIC_INLINE_SIZE", "contain_intrinsic_inline_size", "اندازه درون‌خطی ذاتی", "contain-intrinsic-inline-size", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_contain_intrinsic_inline_size, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_INLINE_SIZE, "CONTAIN_INTRINSIC_INLINE_SIZE", "contain_intrinsic_inline_size", "اندازه درون خطی ذاتی", "contain-intrinsic-inline-size", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_contain_intrinsic_inline_size, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_SIZE, "CONTAIN_INTRINSIC_SIZE", "contain_intrinsic_size", "اندازه ذاتی", "contain-intrinsic-size", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_contain_intrinsic_size, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_WIDTH, "CONTAIN_INTRINSIC_WIDTH", "contain_intrinsic_width", "عرض ذاتی", "contain-intrinsic-width", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_contain_intrinsic_width, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAINER, "CONTAINER", "container", "ظرف", "container", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_container, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAINER_NAME, "CONTAINER_NAME", "container_name", "نام ظرف", "container-name", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_container_name, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAINER_TYPE, "CONTAINER_TYPE", "container_type", "نوع ظرف", "container-type", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_container_type, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTENT, "CONTENT", "content", "محتوا", "content", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_content, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTENT_VISIBILITY, "CONTENT_VISIBILITY", "content_visibility", "مشاهده محتوا", "content-visibility", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_content_visibility, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COUNTER_INCREMENT, "COUNTER_INCREMENT", "counter_increment", "افزایش شمارنده", "counter-increment", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, ast_layout_allowed_style_list_counter_increment, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COUNTER_RESET, "COUNTER_RESET", "counter_reset", "بازنشانی شمارنده", "counter-reset", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COUNTER_SET, "COUNTER_SET", "counter_set", "تنظیم شمارنده", "counter-set", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, ast_layout_allowed_style_list_counter_set, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CURSOR, "CURSOR", "cursor", "نشانگر", "cursor", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_cursor, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_DIRECTION, "DIRECTION", "direction", "جهت", "direction", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_direction, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_DISPLAY, "DISPLAY", "display", "قرارگیری", "display", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_display, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_DISPLAY, "DISPLAY", "display", "قرار گیری", "display", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_display, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_EMPTY_CELLS, "EMPTY_CELLS", "empty_cells", "سلول‌های خالی", "empty-cells", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_empty_cells, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_EMPTY_CELLS, "EMPTY_CELLS", "empty_cells", "سلول های خالی", "empty-cells", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_empty_cells, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FILL, "FILL", "fill", "پر کردن", "fill", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_fill, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FILL_OPACITY, "FILL_OPACITY", "fill_opacity", "شفافیت پر کردن", "fill-opacity", AST_LAYOUT_ATTRIBUTE_FILTER_PERCENTAGE, ast_layout_allowed_style_list_fill, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FILL_RULE, "FILL_RULE", "fill_rule", "قاعده پر کردن", "fill-rule", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_fill_rule, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FILTER, "FILTER", "filter", "فیلتر", "filter", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_filter, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX, "FLEX", "flex", "انعطاف", "flex", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_flex, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_DIRECTION, "FLEX_DIRECTION", "flex_direction", "جهت انعطاف", "flex-direction", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_flex_direction, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_FLOW, "FLEX_FLOW", "flex_flow", "جریان انعطاف", "flex-flow", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_flex_flow, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_GROW, "FLEX_GROW", "flex_grow", "رشد انعطاف", "flex-grow", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_SHRINK, "FLEX_SHRINK", "flex_shrink", "کوچک‌شدن انعطاف", "flex-shrink", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, NULL, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_SHRINK, "FLEX_SHRINK", "flex_shrink", "کوچک‌ شدن انعطاف", "flex-shrink", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_WRAP, "FLEX_WRAP", "flex_wrap", "چینش انعطاف", "flex-wrap", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_flex_wrap, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLOAT, "FLOAT", "float", "شناور", "float", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_float, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_FAMILY, "FONT_FAMILY", "font_family", "نام قلم", "font-family", AST_LAYOUT_ATTRIBUTE_FILTER_STRINGS_ANY, ast_layout_allowed_style_list_font_family, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_FEATURE_SETTINGS, "FONT_FEATURE_SETTINGS", "font_feature_settings", "تنظیمات ویژگی قلم", "font-feature-settings", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_font_feature_settings, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_KERNING, "FONT_KERNING", "font_kerning", "کرنینگ قلم", "font-kerning", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_font_kerning, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_LANGUAGE_OVERRIDE, "FONT_LANGUAGE_OVERRIDE", "font_language_override", "بازنویسی زبان قلم", "font-language-override", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_font_language_override, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_OPTICAL_SIZING, "FONT_OPTICAL_SIZING", "font_optical_sizing", "اندازه‌گیری اپتیکال قلم", "font-optical-sizing", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_font_optical_sizing, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_OPTICAL_SIZING, "FONT_OPTICAL_SIZING", "font_optical_sizing", "اندازه گیری اپتیکال قلم", "font-optical-sizing", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_font_optical_sizing, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_SIZE, "FONT_SIZE", "font_size", "اندازه قلم", "font-size", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_STRETCH, "FONT_STRETCH", "font_stretch", "کشیدگی قلم", "font-stretch", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_font_stretch, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_STYLE, "FONT_STYLE", "font_style", "سبک قلم", "font-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_font_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_VARIANT, "FONT_VARIANT", "font_variant", "نوع قلم", "font-variant", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_font_variant, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_DISPLAY, "FONT_DISPLAY", "font_display", "نمایش قلم", "font-display", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_font_display, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_WEIGHT, "FONT_WEIGHT", "font_weight", "وزن قلم", "font-weight", AST_LAYOUT_ATTRIBUTE_FILTER_POSITIVE_INTEGER, ast_layout_allowed_style_list_font_weight, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID, "GRID", "grid", "شبکه", "grid", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AREA, "GRID_AREA", "grid_area", "منطقه شبکه", "grid-area", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_area, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_COLUMNS, "GRID_AUTO_COLUMNS", "grid_auto_columns", "ستون‌های خودکار شبکه", "grid-auto-columns", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_auto_columns, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_COLUMNS, "GRID_AUTO_COLUMNS", "grid_auto_columns", "ستون های خودکار شبکه", "grid-auto-columns", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_auto_columns, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_FLOW, "GRID_AUTO_FLOW", "grid_auto_flow", "جریان خودکار شبکه", "grid-auto-flow", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_auto_flow, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_ROWS, "GRID_AUTO_ROWS", "grid_auto_rows", "ردیف‌های خودکار شبکه", "grid-auto-rows", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_auto_rows, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_ROWS, "GRID_AUTO_ROWS", "grid_auto_rows", "ردیف های خودکار شبکه", "grid-auto-rows", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_auto_rows, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_COLUMN, "GRID_COLUMN", "grid_column", "ستون‌های شبکه", "grid-column", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_column, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_COLUMN, "GRID_COLUMN", "grid_column", "ستون های شبکه", "grid-column", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_column, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_COLUMN_END, "GRID_COLUMN_END", "grid_column_end", "پایان ستون شبکه", "grid-column-end", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_column_end, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_COLUMN_START, "GRID_COLUMN_START", "grid_column_start", "شروع ستون شبکه", "grid-column-start", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_column_start, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_ROW, "GRID_ROW", "grid_row", "ردیف‌های شبکه", "grid-row", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_row, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_ROW, "GRID_ROW", "grid_row", "ردیف های شبکه", "grid-row", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_row, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_ROW, "GRID_ROW", "grid_row", "پایان ردیف شبکه", "grid-row", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_row, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_ROW_START, "GRID_ROW_START", "grid_row_start", "شروع ردیف شبکه", "grid-row-start", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_row_start, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE, "GRID_TEMPLATE", "grid_template", "الگوی شبکه", "grid-template", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_template, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_AREAS, "GRID_TEMPLATE_AREAS", "grid_template_areas", "مناطق الگوی شبکه", "grid-template-areas", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_template_areas, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_COLUMNS, "GRID_TEMPLATE_COLUMNS", "grid_template_columns", "ستون‌های الگوی شبکه", "grid-template-columns", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_template_columns, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_COLUMNS, "GRID_TEMPLATE_COLUMNS", "grid_template_columns", "ستون های الگوی شبکه", "grid-template-columns", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_template_columns, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_ROWS, "GRID_TEMPLATE_ROWS", "grid_template_rows", "ردیف‌های الگوی شبکه", "grid-template-rows", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_template_rows, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_ROWS, "GRID_TEMPLATE_ROWS", "grid_template_rows", "ردیف های الگوی شبکه", "grid-template-rows", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_grid_template_rows, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_JUSTIFY_CONTENT, "JUSTIFY_CONTENT", "justify_content", "توجیه محتوا", "justify-content", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_justify_content, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_LEFT, "LEFT", "left", "چپ", "left", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_left, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_LETTER_SPACING, "LETTER_SPACING", "letter_spacing", "فاصله بین حروف", "letter-spacing", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_LINE_HEIGHT, "LINE_HEIGHT", "line_height", "ارتفاع خط", "line-height", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_LIST_STYLE, "LIST_STYLE", "list_style", "سبک فهرست", "list-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_list_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN, "MARGIN", "margin", "فضا", "margin", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_margin, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_BOTTOM, "MARGIN_BOTTOM", "margin_bottom", "فضا پایین", "margin-bottom", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_margin_bottom, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_BOTTOM, "MARGIN_BOTTOM", "margin_bottom", "فضای پایین", "margin-bottom", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_margin_bottom, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_LEFT, "MARGIN_LEFT", "margin_left", "فضا چپ", "margin-left", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_margin_left, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_LEFT, "MARGIN_LEFT", "margin_left", "فضای چپ", "margin-left", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_margin_left, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_RIGHT, "MARGIN_RIGHT", "margin_right", "فضا راست", "margin-right", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_margin_right, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_RIGHT, "MARGIN_RIGHT", "margin_right", "فضای راست", "margin-right", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_margin_right, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_TOP, "MARGIN_TOP", "margin_top", "فضا بالا", "margin-top", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_margin_top, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_TOP, "MARGIN_TOP", "margin_top", "فضای بالا", "margin-top", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_margin_top, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MAX_HEIGHT, "MAX_HEIGHT", "max_height", "حداکثر ارتفاع", "max-height", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MAX_WIDTH, "MAX_WIDTH", "max_width", "حداکثر عرض", "max-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MIN_HEIGHT, "MIN_HEIGHT", "min_height", "حداقل ارتفاع", "min-height", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MIN_WIDTH, "MIN_WIDTH", "min_width", "حداقل عرض", "min-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OBJECT_FIT, "OBJECT_FIT", "object_fit", "تناسب شیء", "object-fit", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_object_fit, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OPACITY, "OPACITY", "opacity", "شفافیت", "opacity", AST_LAYOUT_ATTRIBUTE_FILTER_PERCENTAGE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW, "OVERFLOW", "overflow", "بیش از حد", "overflow", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_overflow, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_X, "OVERFLOW_X", "overflow_x", "بیش از حد (X)", "overflow-x", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_overflow_x, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_Y, "OVERFLOW_Y", "overflow_y", "بیش از حد (Y)", "overflow-y", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_overflow_y, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING, "PADDING", "padding", "فاصله", "padding", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_padding, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_RIGHT, "PADDING_RIGHT", "padding_right", "فاصله راست", "padding-right", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_padding, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_LEFT, "PADDING_LEFT", "padding_left", "فاصله چپ", "padding-left", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_padding, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_TOP, "PADDING_TOP", "padding_top", "فاصله بالا", "padding-top", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_padding, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_BOTTOM, "PADDING_BOTTOM", "padding_bottom", "فاصله پایین", "padding-bottom", AST_LAYOUT_ATTRIBUTE_FILTER_SIZES124, ast_layout_allowed_style_list_padding, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_DECORATION, "TEXT_DECORATION", "text_decoration", "زینت متن", "text-decoration", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_text_decoration, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_TRANSFORM, "TEXT_TRANSFORM", "text_transform", "تبدیل متن", "text-transform", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_text_transform, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_VISIBILITY, "VISIBILITY", "visibility", "قابلیت مشاهده", "visibility", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_visibility, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_Z_INDEX, "Z_INDEX", "z_index", "الویت موقعیت", "z-index", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, ast_layout_allowed_style_list_z_index, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_Z_INDEX, "Z_INDEX", "z_index", "ترتیب اولویت", "z-index", AST_LAYOUT_ATTRIBUTE_FILTER_INTEGER, ast_layout_allowed_style_list_z_index, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OUTLINE_COLOR, "OUTLINE_COLOR", "outline_color", "رنگ مرز", "outline-color", AST_LAYOUT_ATTRIBUTE_FILTER_COLOR, ast_layout_allowed_style_list_outline_color, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OUTLINE_OFFSET, "OUTLINE_OFFSET", "outline_offset", "فاصله حاشیه", "outline-offset", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OUTLINE_STYLE, "OUTLINE_STYLE", "outline_style", "سبک حاشیه", "outline-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_outline_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OUTLINE_WIDTH, "OUTLINE_WIDTH", "outline_width", "عرض حاشیه", "outline-width", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_outline_width, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_ANCHOR, "OVERFLOW_ANCHOR", "overflow_anchor", "لنگر بیش از حد", "overflow-anchor", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_overflow_anchor, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_BLOCK, "OVERFLOW_BLOCK", "overflow_block", "بیش از حد بلوک", "overflow-block", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_overflow_block, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_CLIP_MARGIN, "OVERFLOW_CLIP_MARGIN", "overflow_clip_margin", "فاصله برش بیش از حد", "overflow-clip-margin", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_INLINE, "OVERFLOW_INLINE", "overflow_inline", "بیش از حد درون خطی", "overflow-inline", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_overflow_inline, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_WRAP, "OVERFLOW_WRAP", "overflow_wrap", "پیچش بیش از حد", "overflow-wrap", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_overflow_wrap, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_BLOCK, "PADDING_BLOCK", "padding_block", "فاصله بلوک", "padding-block", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_BLOCK_END, "PADDING_BLOCK_END", "padding_block_end", "فاصله انتهای بلوک", "padding-block-end", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_padding_block_end, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_BLOCK_START, "PADDING_BLOCK_START", "padding_block_start", "فاصله شروع بلوک", "padding-block-start", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_padding_block_start, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_INLINE, "PADDING_INLINE", "padding_inline", "فاصله درون خطی", "padding-inline", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_padding_inline, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_INLINE_END, "PADDING_INLINE_END", "padding_inline_end", "فاصله انتهای درون خطی", "padding-inline-end", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_padding_inline_end, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_INLINE_START, "PADDING_INLINE_START", "padding_inline_start", "فاصله شروع درون خطی", "padding-inline-start", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_padding_inline_start, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAGE, "PAGE", "page", "صفحه", "page", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_page, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAGE_BREAK_AFTER, "PAGE_BREAK_AFTER", "page_break_after", "شکست صفحه بعد از", "page-break-after", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_page_break_after, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAGE_BREAK_BEFORE, "PAGE_BREAK_BEFORE", "page_break_before", "شکست صفحه قبل از", "page-break-before", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_page_break_before, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAGE_BREAK_INSIDE, "PAGE_BREAK_INSIDE", "page_break_inside", "شکست صفحه درون", "page-break-inside", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_page_break_inside, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAINT_ORDER, "PAINT_ORDER", "paint_order", "ترتیب نقاشی", "paint-order", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_paint_order, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PERSPECTIVE, "PERSPECTIVE", "perspective", "پرسپکتیو", "perspective", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_perspective, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PERSPECTIVE_ORIGIN, "PERSPECTIVE_ORIGIN", "perspective_origin", "مبدأ پرسپکتیو", "perspective-origin", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_perspective, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PLACE_CONTENT, "PLACE_CONTENT", "place_content", "محتوای مکان", "place-content", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_place_content, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PLACE_ITEMS, "PLACE_ITEMS", "place_items", "موارد مکان", "place-items", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_place_items, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PLACE_SELF, "PLACE_SELF", "place_self", "خود مکان", "place-self", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_place_self, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_POINTER_EVENTS, "POINTER_EVENTS", "pointer_events", "رویدادهای اشاره‌گر", "pointer-events", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_pointer_events, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_POINTER_EVENTS, "POINTER_EVENTS", "pointer_events", "رویدادهای اشاره گر", "pointer-events", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_pointer_events, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_POSITION, "POSITION", "position", "موقعیت", "position", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_position, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PRINT_COLOR_ADJUST, "PRINT_COLOR_ADJUST", "print_color_adjust", "تنظیم رنگ چاپ", "print-color-adjust", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_print_color_adjust, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_QUOTES, "QUOTES", "quotes", "نقل‌قول", "quotes", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_quotes, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_QUOTES, "QUOTES", "quotes", "نقل قول", "quotes", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_quotes, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_R, "R", "r", "شعاع", "r", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RESIZE, "RESIZE", "resize", "تغییر اندازه", "resize", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_resize, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RIGHT, "RIGHT", "right", "راست", "right", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_right, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ROTATE, "ROTATE", "rotate", "چرخش", "rotate", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_rotate, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ROW_GAP, "ROW_GAP", "row_gap", "فاصله ردیف", "row-gap", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_rotate, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RUBY_ALIGN, "RUBY_ALIGN", "ruby_align", "هم‌راستایی روبی", "ruby-align", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_ruby_align, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RUBY_ALIGN, "RUBY_ALIGN", "ruby_align", "هم راستایی روبی", "ruby-align", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_ruby_align, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RUBY_POSITION, "RUBY_POSITION", "ruby_position", "موقعیت روبی", "ruby-position", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_ruby_position, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RX, "RX", "rx", "شعاع X", "rx", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RY, "RY", "ry", "شعاع Y", "ry", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCALE, "SCALE", "scale", "مقیاس", "scale", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_BEHAVIOR, "SCROLL_BEHAVIOR", "scroll_behavior", "رفتار پیمایش", "scroll-behavior", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_scroll_behavior, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN, "SCROLL_MARGIN", "scroll_margin", "فاصله پیمایش", "scroll-margin", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_BLOCK, "SCROLL_MARGIN_BLOCK", "scroll_margin_block", "فاصله بلوک پیمایش", "scroll-margin-block", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_BLOCK_END, "SCROLL_MARGIN_BLOCK_END", "scroll_margin_block_end", "فاصله انتهای بلوک پیمایش", "scroll-margin-block-end", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_BLOCK_START, "SCROLL_MARGIN_BLOCK_START", "scroll_margin_block_start", "فاصله شروع بلوک پیمایش", "scroll-margin-block-start", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_BOTTOM, "SCROLL_MARGIN_BOTTOM", "scroll_margin_bottom", "فاصله پایین پیمایش", "scroll-margin-bottom", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_INLINE, "SCROLL_MARGIN_INLINE", "scroll_margin_inline", "فاصله درون خطی پیمایش", "scroll-margin-inline", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_INLINE_END, "SCROLL_MARGIN_INLINE_END", "scroll_margin_inline_end", "فاصله انتهای درون خطی پیمایش", "scroll-margin-inline-end", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_INLINE_START, "SCROLL_MARGIN_INLINE_START", "scroll_margin_inline_start", "فاصله شروع درون خطی پیمایش", "scroll-margin-inline-start", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_LEFT, "SCROLL_MARGIN_LEFT", "scroll_margin_left", "فاصله چپ پیمایش", "scroll-margin-left", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_RIGHT, "SCROLL_MARGIN_RIGHT", "scroll_margin_right", "فاصله راست پیمایش", "scroll-margin-right", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_TOP, "SCROLL_MARGIN_TOP", "scroll_margin_top", "فاصله بالا پیمایش", "scroll-margin-top", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING, "SCROLL_PADDING", "scroll_padding", "فاصله پیمایش", "scroll-padding", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_BLOCK, "SCROLL_PADDING_BLOCK", "scroll_padding_block", "فاصله بلوک پیمایش", "scroll-padding-block", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_BLOCK_END, "SCROLL_PADDING_BLOCK_END", "scroll_padding_block_end", "فاصله انتهای بلوک پیمایش", "scroll-padding-block-end", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_BLOCK_START, "SCROLL_PADDING_BLOCK_START", "scroll_padding_block_start", "فاصله شروع بلوک پیمایش", "scroll-padding-block-start", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_BOTTOM, "SCROLL_PADDING_BOTTOM", "scroll_padding_bottom", "فاصله پایین پیمایش", "scroll-padding-bottom", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_INLINE, "SCROLL_PADDING_INLINE", "scroll_padding_inline", "فاصله درون خطی پیمایش", "scroll-padding-inline", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_INLINE_END, "SCROLL_PADDING_INLINE_END", "scroll_padding_inline_end", "فاصله انتهای درون خطی پیمایش", "scroll-padding-inline-end", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_INLINE_START, "SCROLL_PADDING_INLINE_START", "scroll_padding_inline_start", "فاصله شروع درون خطی پیمایش", "scroll-padding-inline-start", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_LEFT, "SCROLL_PADDING_LEFT", "scroll_padding_left", "فاصله چپ پیمایش", "scroll-padding-left", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_RIGHT, "SCROLL_PADDING_RIGHT", "scroll_padding_right", "فاصله راست پیمایش", "scroll-padding-right", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_TOP, "SCROLL_PADDING_TOP", "scroll_padding_top", "فاصله بالا پیمایش", "scroll-padding-top", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_SNAP_ALIGN, "SCROLL_SNAP_ALIGN", "scroll_snap_align", "تراز پیمایش", "scroll-snap-align", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_scroll_snap_align, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_SNAP_TYPE, "SCROLL_SNAP_TYPE", "scroll_snap_type", "نوع پیمایش", "scroll-snap-type", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_scroll_snap_type, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SHAPE_OUTSIDE, "SHAPE_OUTSIDE", "shape_outside", "شکل خارج", "shape-outside", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_shape_outside, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_ALIGN, "TEXT_ALIGN", "text_align", "تراز متن", "text-align", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_text_align, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_ALIGN_LAST, "TEXT_ALIGN_LAST", "text_align_last", "تراز آخرین متن", "text-align-last", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_text_align_last, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ALIGN_ITEMS, "ALIGN_ITEMS", "align_items", "تراز‌کردن‌ اقلام", "align-items", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_align_items, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ALIGN_ITEMS, "ALIGN_ITEMS", "align_items", "تراز‌ کردن‌ اقلام", "align-items", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_align_items, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ALIGN_ITEMS, "ALIGN_ITEMS", "align_items", "تراز‌کردن‌ محتوا", "align-items", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_align_items, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ALIGN_ITEMS, "ALIGN_ITEMS", "align_items", "تراز محتوا", "align-items", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_align_items, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_INDENT, "TEXT_INDENT", "text_indent", "تورفتگی متن", "text-indent", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_text_indent, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_INDENT, "TEXT_INDENT", "text_indent", "تو رفتگی متن", "text-indent", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_text_indent, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TOP, "TOP", "top", "بالا", "top", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, ast_layout_allowed_style_list_top, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSFORM, "TRANSFORM", "transform", "تبدیل", "transform", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_transform, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSFORM_ORIGIN, "TRANSFORM_ORIGIN", "transform_origin", "مرکز تبدیل", "transform-origin", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_transform_origin, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSLATE, "TRANSLATE", "translate", "ترجمه", "translate", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_UNICODE_BIDI, "UNICODE_BIDI", "unicode_bidi", "معکوس یونیکد", "unicode-bidi", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_unicode_bidi, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_USER_SELECT, "USER_SELECT", "user_select", "انتخاب کاربر", "user-select", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_user_select, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WILL_CHANGE, "WILL_CHANGE", "will_change", "تغییر خواهد کرد", "will-change", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_will_change, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSFORM_BOX, "TRANSFORM_BOX", "transform_box", "باکس تبدیل", "transform-box", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_transform_box, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSFORM_STYLE, "TRANSFORM_STYLE", "transform_style", "سبک تبدیل", "transform-style", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_transform_style, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION, "TRANSITION", "transition", "انتقال", "transition", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, ast_layout_allowed_style_list_transition, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_BEHAVIOR, "TRANSITION_BEHAVIOR", "transition_behavior", "رفتار انتقال", "transition-behavior", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_transition_behavior, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_DELAY, "TRANSITION_DELAY", "transition_delay", "تاخیر انتقال", "transition-behavior", AST_LAYOUT_ATTRIBUTE_FILTER_TIME, ast_layout_allowed_style_list_transition_delay, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_DURATION, "TRANSITION_DURATION", "transition_duration", "مدت انتقال", "transition-behavior", AST_LAYOUT_ATTRIBUTE_FILTER_TIME, ast_layout_allowed_style_list_transition_duration, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_PROPERTY, "TRANSITION_PROPERTY", "transition_property", "ویژگی انتقال", "transition-property", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_transition_property, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_TIMING_FUNCTION, "TRANSITION_TIMING_FUNCTION", "transition_timing_function", "تابع زمان‌بندی انتقال", "transition-timing-function", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_transition_timing_function, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_TIMING_FUNCTION, "TRANSITION_TIMING_FUNCTION", "transition_timing_function", "تابع زمان بندی انتقال", "transition-timing-function", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_transition_timing_function, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_VECTOR_EFFECT, "VECTOR_EFFECT", "vector_effect", "اثر وکتور", "vector-effect", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_vector_effect, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_VERTICAL_ALIGN, "VERTICAL_ALIGN", "vertical_align", "تراز عمودی", "vertical-align", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_vertical_align, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WHITE_SPACE, "WHITE_SPACE", "white_space", "فضای سفید", "white-space", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_white_space, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WIDOWS, "WIDOWS", "widows", "بیوه‌ها", "widows", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WIDOWS, "WIDOWS", "widows", "بیوه‌ ها", "widows", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WORD_BREAK, "WORD_BREAK", "word_break", "شکستن کلمه", "word-break", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_word_break, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WORD_SPACING, "WORD_SPACING", "word_spacing", "فاصله کلمه", "word-spacing", AST_LAYOUT_ATTRIBUTE_FILTER_SIZE, NULL, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WRITING_MODE, "WRITING_MODE", "writing_mode", "حالت نوشتن", "writing-mode", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_writing_mode, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ZOOM, "ZOOM", "zoom", "بزرگنمایی", "zoom", AST_LAYOUT_ATTRIBUTE_FILTER_STRING, ast_layout_allowed_style_list_zoom, NULL, value_handler_simple)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_HIDE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ERROR, "ERROR", "error", "", "error", AST_LAYOUT_ATTRIBUTE_FILTER_STRING_ANY, NULL, NULL, value_handler_simple)

// ----------- END AUTO GENERATED ----------- //









































