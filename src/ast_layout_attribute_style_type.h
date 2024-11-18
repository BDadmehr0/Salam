ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WIDTH,
                                "STYLE_WIDTH", "style_width", "عرض", "width",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_width, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_HEIGHT,
                                "STYLE_HEIGHT", "style_height", "ارتفاع",
                                "height",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_height, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ACCENT_COLOR,
                                "STYLE_ACCENT_COLOR", "style_accent_color",
                                "رنگ برجسته", "accent-color",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_APPEARANCE,
                                "STYLE_APPEARANCE", "style_appearance", "ظاهر",
                                "appearance",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_appearance, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ASPECT_RATIO,
                                "STYLE_ASPECT_RATIO", "style_aspect_ratio",
                                "نسبت ابعاد", "aspect-ratio",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_aspect_ratio,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKDROP_FILTER, "STYLE_BACKDROP_FILTER",
    "style_backdrop_filter", "فیلتر پس‌زمینه", "backdrop-filter",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY, NULL, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKDROP_FILTER, "STYLE_BACKDROP_FILTER",
    "style_backdrop_filter", "فیلتر پس زمینه", "backdrop-filter",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY, NULL, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKDROP_FILTER, "STYLE_BACKDROP_FILTER",
    "style_backdrop_filter", "فیلتر پس زمینه", "backdrop-filter",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKFACE_VISIBILITY,
    "STYLE_BACKFACE_VISIBILITY", "style_backface_visibility",
    "مشاهده‌پذیری پشت‌نما", "backface-visibility",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_backface_visibility, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKFACE_VISIBILITY,
    "STYLE_BACKFACE_VISIBILITY", "style_backface_visibility",
    "مشاهده پذیری پشت‌نما", "backface-visibility",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_backface_visibility, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKFACE_VISIBILITY,
    "STYLE_BACKFACE_VISIBILITY", "style_backface_visibility",
    "مشاهده پذیری پشت نما", "backface-visibility",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_backface_visibility, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKFACE_VISIBILITY,
    "STYLE_BACKFACE_VISIBILITY", "style_backface_visibility",
    "مشاهده پذیری پشت نما", "backface-visibility",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_backface_visibility, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BLOCK_SIZE,
                                "STYLE_BLOCK_SIZE", "style_block_size",
                                "اندازه بلوک", "block-size",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_block_size, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_IMAGE, "STYLE_BACKGROUND_IMAGE",
    "style_background_image", "تصویر پس‌زمینه",
    "background-image", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_image, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_IMAGE, "STYLE_BACKGROUND_IMAGE",
    "style_background_image", "تصویر پس زمینه", "background-image",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_image, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_ATTACHMENT,
    "STYLE_BACKGROUND_ATTACHMENT", "style_background_attachment",
    "پیوست تصویر پس‌زمینه", "background-attachment",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_background_attachment, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_ATTACHMENT,
    "STYLE_BACKGROUND_ATTACHMENT", "style_background_attachment",
    "پیوست تصویر پس زمینه", "background-attachment",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_background_attachment, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_BLEND_MODE,
    "STYLE_BACKGROUND_BLEND_MODE", "style_background_blend_mode",
    "حالت ترکیب پس‌زمینه", "background-blend-mode",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_background_blend_mode, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_BLEND_MODE,
    "STYLE_BACKGROUND_BLEND_MODE", "style_background_blend_mode",
    "حالت ترکیب پس زمینه", "background-blend-mode",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_background_blend_mode, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_CLIP,
                                "STYLE_BACKGROUND_CLIP",
                                "style_background_clip",
                                "برش پس‌زمینه", "background-clip",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_background_clip,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_CLIP, "STYLE_BACKGROUND_CLIP",
    "style_background_clip", "برش پس زمینه", "background-clip",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_background_clip, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_COLOR, "STYLE_BACKGROUND_COLOR",
    "style_background_color", "رنگ پس‌زمینه", "background-color",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_COLOR, "STYLE_BACKGROUND_COLOR",
    "style_background_color", "رنگ پس زمینه", "background-color",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_ORIGIN,
    "STYLE_BACKGROUND_ORIGIN", "style_background_origin",
    "مبدا پس‌زمینه", "background-origin",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_background_origin, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_ORIGIN,
    "STYLE_BACKGROUND_ORIGIN", "style_background_origin", "مبدا پس زمینه",
    "background-origin", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_background_origin, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_BASIS,
                                "STYLE_FLEX_BASIS", "style_flex_basis",
                                "مبنای انعطاف", "flex-basis",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
                                ast_layout_allowed_style_list_flex_basis, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_BASIS, "STYLE_FLEX_BASIS",
    "style_flex_basis", "مبنای انعطاف", "flex-basis",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_flex_basis, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION,
    "STYLE_BACKGROUND_POSITION", "style_background_position",
    "موقعیت پس‌زمینه", "background-position",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_position_x, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION,
    "STYLE_BACKGROUND_POSITION", "style_background_position", "موقعیت پس زمینه",
    "background-position", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_position_x, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION_X,
    "STYLE_BACKGROUND_POSITION_X", "style_background_position_x",
    "موقعیت افقی پس‌زمینه", "background-position-x",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_position_x, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION_X,
    "STYLE_BACKGROUND_POSITION_X", "style_background_position_x",
    "موقعیت افقی پس زمینه", "background-position-x",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_position_x, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION_Y,
    "STYLE_BACKGROUND_POSITION_Y", "style_background_position_y",
    "موقعیت عمودی پس‌زمینه", "background-position-y",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_position_y, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_POSITION_Y,
    "STYLE_BACKGROUND_POSITION_Y", "style_background_position_y",
    "موقعیت عمودی پس زمینه", "background-position-y",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_position_y, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_REPEAT,
    "STYLE_BACKGROUND_REPEAT", "style_background_repeat",
    "تکرار پس‌زمینه", "background-repeat",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_repeat, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_REPEAT,
    "STYLE_BACKGROUND_REPEAT", "style_background_repeat", "تکرار پس زمینه",
    "background-repeat", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_repeat, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_SIZE, "STYLE_BACKGROUND_SIZE",
    "style_background_size", "اندازه پس‌زمینه",
    "background-size", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_size, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BACKGROUND_SIZE, "STYLE_BACKGROUND_SIZE",
    "style_background_size", "اندازه پس زمینه", "background-size",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
    ast_layout_allowed_style_list_background_size, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_RADIUS,
                                "STYLE_BORDER_RADIUS", "style_border_radius",
                                "گردی", "border-radius",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZES124,
                                NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER,
                                "STYLE_BORDER", "style_border", "مرز", "border",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
                                NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_END_COLOR,
    "STYLE_BORDER_BLOCK_END_COLOR", "style_border_block_end_color",
    "رنگ مرز انتهایی بلوک", "border-block-end-color",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_END_STYLE,
    "STYLE_BORDER_BLOCK_END_STYLE", "style_border_block_end_style",
    "سبک مرز انتهایی بلوک", "border-block-end-style",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_block_end_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_END_WIDTH,
    "STYLE_BORDER_BLOCK_END_WIDTH", "style_border_block_end_width",
    "عرض مرز انتهایی بلوک", "border-block-end-width",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
    ast_layout_allowed_style_list_border_block_end_width, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_START_COLOR,
    "STYLE_BORDER_BLOCK_START_COLOR", "style_border_block_start_color",
    "رنگ مرز ابتدایی بلوک", "border-block-start-color",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_START_STYLE,
    "STYLE_BORDER_BLOCK_START_STYLE", "style_border_block_start_style",
    "سبک مرز ابتدایی بلوک", "border-block-start-style",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_block_start_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BLOCK_START_WIDTH,
    "STYLE_BORDER_BLOCK_START_WIDTH", "style_border_block_start_width",
    "عرض مرز ابتدایی بلوک", "border-block-start-width",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
    ast_layout_allowed_style_list_border_block_start_width, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_COLOR,
    "STYLE_BORDER_BOTTOM_COLOR", "style_border_bottom_color", "رنگ مرز پایین",
    "border-bottom-color", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_LEFT_RADIUS,
    "STYLE_BORDER_BOTTOM_LEFT_RADIUS", "style_border_bottom_left_radius",
    "گردی پایین چپ", "border-bottom-left-radius",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_RIGHT_RADIUS,
    "STYLE_BORDER_BOTTOM_RIGHT_RADIUS", "style_border_bottom_right_radius",
    "گردی پایین راست", "border-bottom-right-radius",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_STYLE,
    "STYLE_BORDER_BOTTOM_STYLE", "style_border_bottom_style", "سبک مرز پایین",
    "border-bottom-style", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_bottom_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_BOTTOM_WIDTH,
    "STYLE_BORDER_BOTTOM_WIDTH", "style_border_bottom_width", "عرض مرز پایین",
    "border-bottom-width", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_COLLAPSE,
                                "STYLE_BORDER_COLLAPSE",
                                "style_border_collapse", "ادغام مرز",
                                "border-collapse",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_border_collapse,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_COLLAPSE, "STYLE_BORDER_COLLAPSE",
    "style_border_collapse", "ادغام مرز ها", "border-collapse",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_collapse, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_COLLAPSE, "STYLE_BORDER_COLLAPSE",
    "style_border_collapse", "ادغام مرزها", "border-collapse",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_collapse, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_END_END_RADIUS,
    "STYLE_BORDER_END_END_RADIUS", "style_border_end_end_radius", "گردی انتها",
    "border-end-end-radius", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_END_START_RADIUS,
    "STYLE_BORDER_END_START_RADIUS", "style_border_end_start_radius",
    "گردی شروع", "border-end-start-radius",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_OUTSET,
    "STYLE_BORDER_IMAGE_OUTSET", "style_border_image_outset",
    "برآمدگی تصویر مرز", "border-image-outset",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_REPEAT,
    "STYLE_BORDER_IMAGE_REPEAT", "style_border_image_repeat", "تکرار تصویر مرز",
    "border-image-repeat", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_image_repeat, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_SLICE,
    "STYLE_BORDER_IMAGE_SLICE", "style_border_image_slice", "برش تصویر مرز",
    "border-image-slice", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_NUMBER, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_SOURCE,
    "STYLE_BORDER_IMAGE_SOURCE", "style_border_image_source", "منبع تصویر مرز",
    "border-image-source", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_image_source, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_IMAGE_WIDTH,
    "STYLE_BORDER_IMAGE_WIDTH", "style_border_image_width", "عرض تصویر مرز",
    "border-image-width", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
    ast_layout_allowed_style_list_border_image_width, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_END_COLOR,
    "STYLE_BORDER_INLINE_END_COLOR", "style_border_inline_end_color",
    "رنگ مرز انتهایی خطی", "border-inline-end-color",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_END_STYLE,
    "STYLE_BORDER_INLINE_END_STYLE", "style_border_inline_end_style",
    "سبک مرز انتهایی خطی", "border-inline-end-style",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_inline_end_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_END_WIDTH,
    "STYLE_BORDER_INLINE_END_WIDTH", "style_border_inline_end_width",
    "عرض مرز انتهایی خطی", "border-inline-end-width",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_START_COLOR,
    "STYLE_BORDER_INLINE_START_COLOR", "style_border_inline_start_color",
    "رنگ مرز ابتدایی خطی", "border-inline-start-color",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_START_STYLE,
    "STYLE_BORDER_INLINE_START_STYLE", "style_border_inline_start_style",
    "سبک مرز ابتدایی خطی", "border-inline-start-style",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_inline_start_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_INLINE_START_WIDTH,
    "STYLE_BORDER_INLINE_START_WIDTH", "style_border_inline_start_width",
    "عرض مرز ابتدایی خطی", "border-inline-start-width",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_LEFT_COLOR,
    "STYLE_BORDER_LEFT_COLOR", "style_border_left_color", "رنگ مرز چپ",
    "border-left-color", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_LEFT_STYLE,
    "STYLE_BORDER_LEFT_STYLE", "style_border_left_style", "سبک مرز چپ",
    "border-left-style", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_left_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_LEFT_WIDTH,
    "STYLE_BORDER_LEFT_WIDTH", "style_border_left_width", "عرض مرز چپ",
    "border-left-width", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_RIGHT_COLOR,
    "STYLE_BORDER_RIGHT_COLOR", "style_border_right_color", "رنگ مرز راست",
    "border-right-color", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_RIGHT_STYLE,
    "STYLE_BORDER_RIGHT_STYLE", "style_border_right_style", "سبک مرز راست",
    "border-right-style", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_right_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_RIGHT_WIDTH,
    "STYLE_BORDER_RIGHT_WIDTH", "style_border_right_width", "عرض مرز راست",
    "border-right-width", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_SPACING,
                                "STYLE_BORDER_SPACING", "style_border_spacing",
                                "فاصله مرز", "border-spacing",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_START_END_RADIUS,
    "STYLE_BORDER_START_END_RADIUS", "style_border_start_end_radius",
    "گردی ابتدا و انتها", "border-start-end-radius",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_START_START_RADIUS,
    "STYLE_BORDER_START_START_RADIUS", "style_border_start_start_radius",
    "شعاع ابتدایی شروع مرز", "border-start-start-radius",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_COLOR, "STYLE_BORDER_TOP_COLOR",
    "style_border_top_color", "رنگ مرز بالا", "border-top-color",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_LEFT_RADIUS,
    "STYLE_BORDER_TOP_LEFT_RADIUS", "style_border_top_left_radius",
    "گردی بالا چپ", "border-top-left-radius",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_RIGHT_RADIUS,
    "STYLE_BORDER_TOP_RIGHT_RADIUS", "style_border_top_right_radius",
    "گردی بالا راست", "border-top-right-radius",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_STYLE, "STYLE_BORDER_TOP_STYLE",
    "style_border_top_style", "سبک مرز بالا", "border-top-style",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_border_top_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BORDER_TOP_WIDTH, "STYLE_BORDER_TOP_WIDTH",
    "style_border_top_width", "عرض مرز بالا", "border-top-width",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BOTTOM,
                                "STYLE_BOTTOM", "style_bottom", "پایین",
                                "bottom",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_bottom, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BOX_SIZING,
                                "STYLE_BOX_SIZING", "style_box_sizing",
                                "نوع اندازه‌گیری جعبه",
                                "box-sizing",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_box_sizing, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BOX_SIZING, "STYLE_BOX_SIZING",
    "style_box_sizing", "نوع اندازه گیری جعبه", "box-sizing",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_box_sizing, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BOX_SHADOW,
                                "STYLE_BOX_SHADOW", "style_box_shadow",
                                "سایه جعبه", "box-shadow",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
                                NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BREAK_INSIDE,
                                "STYLE_BREAK_INSIDE", "style_break_inside",
                                "شکست درون", "break-inside",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_break_inside,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BREAK_BEFORE,
                                "STYLE_BREAK_BEFORE", "style_break_before",
                                "شکست قبل", "break-before",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_break_before,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_BREAK_AFTER,
                                "STYLE_BREAK_AFTER", "style_break_after",
                                "شکست بعد", "break-after",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_break_after, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CAPTION_SIDE,
                                "STYLE_CAPTION_SIDE", "style_caption_side",
                                "موقعیت عنوان", "caption-side",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_caption_side,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CARET_COLOR,
                                "STYLE_CARET_COLOR", "style_caret_color",
                                "رنگ نشانگر متنی", "caret-color",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CLEAR,
                                "STYLE_CLEAR", "style_clear",
                                "پاک‌سازی", "clear",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_clear, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CLEAR,
                                       "STYLE_CLEAR", "style_clear", "پاک سازی",
                                       "clear",
                                       AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                       ast_layout_allowed_style_list_clear,
                                       NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CLIP_PATH,
                                "STYLE_CLIP_PATH", "style_clip_path",
                                "مسیر برش", "clip-path",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_clip_path, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CLIP_RULE,
                                "STYLE_CLIP_RULE", "style_clip_rule",
                                "قاعده برش", "clip-rule",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_clip_rule, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR,
                                "STYLE_COLOR", "style_color", "رنگ", "color",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_INTERPOLATION,
    "STYLE_COLOR_INTERPOLATION", "style_color_interpolation",
    "درهم‌آمیزی رنگ", "color-interpolation",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_color_interpolation, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_INTERPOLATION,
    "STYLE_COLOR_INTERPOLATION", "style_color_interpolation", "درهم آمیزی رنگ",
    "color-interpolation", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_color_interpolation, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_INTERPOLATION_FILTERS,
    "STYLE_COLOR_INTERPOLATION_FILTERS", "style_color_interpolation_filters",
    "درهم‌آمیزی رنگ فیلترها",
    "color-interpolation-filters", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_color_interpolation_filters, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_INTERPOLATION_FILTERS,
    "STYLE_COLOR_INTERPOLATION_FILTERS", "style_color_interpolation_filters",
    "درهم آمیزی رنگ فیلترها", "color-interpolation-filters",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_color_interpolation_filters, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLOR_SCHEME,
                                "STYLE_COLOR_SCHEME", "style_color_scheme",
                                "طرح رنگ", "color-scheme",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_color_scheme,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_COUNT,
                                "STYLE_COLUMN_COUNT", "style_column_count",
                                "تعداد ستون‌ها", "column-count",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER,
                                ast_layout_allowed_style_list_column_count,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_COUNT, "STYLE_COLUMN_COUNT",
    "style_column_count", "تعداد ستون ها", "column-count",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER,
    ast_layout_allowed_style_list_column_count, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_FILL,
                                "STYLE_COLUMN_FILL", "style_column_fill",
                                "پر کردن ستون‌ها", "column-fill",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_column_fill, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_FILL, "STYLE_COLUMN_FILL",
    "style_column_fill", "پر کردن ستون ها", "column-fill",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_column_fill, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_GAP,
                                "STYLE_COLUMN_GAP", "style_column_gap",
                                "فاصله بین ستون‌ها",
                                "column-gap",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_GAP, "STYLE_COLUMN_GAP",
    "style_column_gap", "فاصله بین ستون ها", "column-gap",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_RULE_COLOR,
    "STYLE_COLUMN_RULE_COLOR", "style_column_rule_color", "رنگ خط افقی ستون",
    "column-rule-color", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_RULE_STYLE,
    "STYLE_COLUMN_RULE_STYLE", "style_column_rule_style", "سبک خط افقی ستون",
    "column-rule-style", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_column_rule_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_RULE_WIDTH,
    "STYLE_COLUMN_RULE_WIDTH", "style_column_rule_width", "عرض خط افقی ستون",
    "column-rule-width", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_SPAN,
                                "STYLE_COLUMN_SPAN", "style_column_span",
                                "گستردگی ستون‌ها", "column-span",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_column_span, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMN_SPAN, "STYLE_COLUMN_SPAN",
    "style_column_span", "گستردگی ستون ها", "column-span",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_column_span, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMNS,
                                "STYLE_COLUMNS", "style_columns",
                                "ستون‌ها", "columns",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
                                NULL, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COLUMNS,
                                       "STYLE_COLUMNS", "style_columns",
                                       "ستون ها", "columns",
                                       AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                       ast_layout_allowed_style_list_columns,
                                       NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN,
                                "STYLE_CONTAIN", "style_contain", "حاوی بودن",
                                "contain",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_contain, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_BLOCK_SIZE,
    "STYLE_CONTAIN_INTRINSIC_BLOCK_SIZE", "style_contain_intrinsic_block_size",
    "اندازه بلوک ذاتی", "contain-intrinsic-block-size",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_contain_intrinsic_block_size, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_HEIGHT,
    "STYLE_CONTAIN_INTRINSIC_HEIGHT", "style_contain_intrinsic_height",
    "ارتفاع ذاتی", "contain-intrinsic-height",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_contain_intrinsic_height, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_INLINE_SIZE,
    "STYLE_CONTAIN_INTRINSIC_INLINE_SIZE",
    "style_contain_intrinsic_inline_size",
    "اندازه درون‌خطی ذاتی", "contain-intrinsic-inline-size",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_contain_intrinsic_inline_size, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_INLINE_SIZE,
    "STYLE_CONTAIN_INTRINSIC_INLINE_SIZE",
    "style_contain_intrinsic_inline_size", "اندازه درون خطی ذاتی",
    "contain-intrinsic-inline-size", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_contain_intrinsic_inline_size, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_SIZE,
    "STYLE_CONTAIN_INTRINSIC_SIZE", "style_contain_intrinsic_size",
    "اندازه ذاتی", "contain-intrinsic-size",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_contain_intrinsic_size, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAIN_INTRINSIC_WIDTH,
    "STYLE_CONTAIN_INTRINSIC_WIDTH", "style_contain_intrinsic_width",
    "عرض ذاتی", "contain-intrinsic-width",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_contain_intrinsic_width, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAINER,
                                "STYLE_CONTAINER", "style_container", "ظرف",
                                "container",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_container, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAINER_NAME,
                                "STYLE_CONTAINER_NAME", "style_container_name",
                                "نام ظرف", "container-name",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_container_name,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTAINER_TYPE,
                                "STYLE_CONTAINER_TYPE", "style_container_type",
                                "نوع ظرف", "container-type",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_container_type,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTENT,
                                "STYLE_CONTENT", "style_content", "محتوا",
                                "content",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_content, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CONTENT_VISIBILITY,
    "STYLE_CONTENT_VISIBILITY", "style_content_visibility", "مشاهده محتوا",
    "content-visibility", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_content_visibility, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COUNTER_INCREMENT,
    "STYLE_COUNTER_INCREMENT", "style_counter_increment", "افزایش شمارنده",
    "counter-increment", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER,
    ast_layout_allowed_style_list_counter_increment, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COUNTER_RESET,
                                "STYLE_COUNTER_RESET", "style_counter_reset",
                                "بازنشانی شمارنده", "counter-reset",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER,
                                ast_layout_allowed_style_list_counter_reset,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_COUNTER_SET,
                                "STYLE_COUNTER_SET", "style_counter_set",
                                "تنظیم شمارنده", "counter-set",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER,
                                ast_layout_allowed_style_list_counter_set, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_CURSOR,
                                "STYLE_CURSOR", "style_cursor", "نشانگر",
                                "cursor",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_cursor, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_DIRECTION,
                                "STYLE_DIRECTION", "style_direction", "جهت",
                                "direction",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_direction, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_DISPLAY,
                                "STYLE_DISPLAY", "style_display", "قرارگیری",
                                "display",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_display, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_DISPLAY,
                                       "STYLE_DISPLAY", "style_display",
                                       "قرار گیری", "display",
                                       AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                       ast_layout_allowed_style_list_display,
                                       NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_EMPTY_CELLS,
                                "STYLE_EMPTY_CELLS", "style_empty_cells",
                                "سلول‌های خالی", "empty-cells",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_empty_cells, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_EMPTY_CELLS, "STYLE_EMPTY_CELLS",
    "style_empty_cells", "سلول های خالی", "empty-cells",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_empty_cells, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FILL,
                                "STYLE_FILL", "style_fill", "پر کردن", "fill",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_fill, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FILL_OPACITY,
                                "STYLE_FILL_OPACITY", "style_fill_opacity",
                                "شفافیت پر کردن", "fill-opacity",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_PERCENTAGE,
                                NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FILL_RULE,
                                "STYLE_FILL_RULE", "style_fill_rule",
                                "قاعده پر کردن", "fill-rule",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_fill_rule, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FILTER,
                                "STYLE_FILTER", "style_filter", "فیلتر",
                                "filter",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_filter, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX,
                                "STYLE_FLEX", "style_flex", "انعطاف", "flex",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_flex, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_DIRECTION,
                                "STYLE_FLEX_DIRECTION", "style_flex_direction",
                                "جهت انعطاف", "flex-direction",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_flex_direction,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_FLOW,
                                "STYLE_FLEX_FLOW", "style_flex_flow",
                                "جریان انعطاف", "flex-flow",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_flex_flow, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_GROW,
                                "STYLE_FLEX_GROW", "style_flex_grow",
                                "رشد انعطاف", "flex-grow",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_SHRINK,
                                "STYLE_FLEX_SHRINK", "style_flex_shrink",
                                "کوچک‌شدن انعطاف", "flex-shrink",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER, NULL,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_SHRINK, "STYLE_FLEX_SHRINK",
    "style_flex_shrink", "کوچک شدن انعطاف", "flex-shrink",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLEX_WRAP,
                                "STYLE_FLEX_WRAP", "style_flex_wrap",
                                "چینش انعطاف", "flex-wrap",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_flex_wrap, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FLOAT,
                                "STYLE_FLOAT", "style_float", "شناور", "float",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_float, NULL)

// ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT,
// "STYLE_FONT", "style_font", "فونت", "font",
// AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING, ast_layout_allowed_style_list_font,
// NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_FAMILY,
                                "STYLE_FONT_FAMILY", "style_font_family",
                                "نام قلم", "font-family",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRINGS_ANY,
                                ast_layout_allowed_style_list_font_family, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_FEATURE_SETTINGS,
    "STYLE_FONT_FEATURE_SETTINGS", "style_font_feature_settings",
    "تنظیمات ویژگی قلم", "font-feature-settings",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_font_feature_settings, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_KERNING,
                                "STYLE_FONT_KERNING", "style_font_kerning",
                                "کرنینگ قلم", "font-kerning",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_font_kerning,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_LANGUAGE_OVERRIDE,
    "STYLE_FONT_LANGUAGE_OVERRIDE", "style_font_language_override",
    "بازنویسی زبان قلم", "font-language-override",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_font_language_override, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_OPTICAL_SIZING,
    "STYLE_FONT_OPTICAL_SIZING", "style_font_optical_sizing",
    "اندازه‌گیری اپتیکال قلم", "font-optical-sizing",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_font_optical_sizing, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_OPTICAL_SIZING,
    "STYLE_FONT_OPTICAL_SIZING", "style_font_optical_sizing",
    "اندازه گیری اپتیکال قلم", "font-optical-sizing",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_font_optical_sizing, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_SIZE,
                                "STYLE_FONT_SIZE", "style_font_size",
                                "اندازه قلم", "font-size",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_STRETCH,
                                "STYLE_FONT_STRETCH", "style_font_stretch",
                                "کشیدگی قلم", "font-stretch",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_font_stretch,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_STYLE,
                                "STYLE_FONT_STYLE", "style_font_style",
                                "سبک قلم", "font-style",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_font_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_VARIANT,
                                "STYLE_FONT_VARIANT", "style_font_variant",
                                "نوع قلم", "font-variant",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_font_variant,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_DISPLAY,
                                "STYLE_FONT_DISPLAY", "style_font_display",
                                "نمایش قلم", "font-display",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_font_display,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_FONT_WEIGHT, "STYLE_FONT_WEIGHT",
    "style_font_weight", "وزن قلم", "font-weight",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_POSITIVE_INTEGER,
    ast_layout_allowed_style_list_font_weight, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID,
                                "STYLE_GRID", "style_grid", "شبکه", "grid",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AREA,
                                "STYLE_GRID_AREA", "style_grid_area",
                                "منطقه شبکه", "grid-area",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid_area, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_COLUMNS,
    "STYLE_GRID_AUTO_COLUMNS", "style_grid_auto_columns",
    "ستون‌های خودکار شبکه", "grid-auto-columns",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_auto_columns, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_COLUMNS,
    "STYLE_GRID_AUTO_COLUMNS", "style_grid_auto_columns",
    "ستون های خودکار شبکه", "grid-auto-columns",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_auto_columns, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_FLOW,
                                "STYLE_GRID_AUTO_FLOW", "style_grid_auto_flow",
                                "جریان خودکار شبکه", "grid-auto-flow",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid_auto_flow,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_ROWS,
                                "STYLE_GRID_AUTO_ROWS", "style_grid_auto_rows",
                                "ردیف‌های خودکار شبکه",
                                "grid-auto-rows",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid_auto_rows,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_AUTO_ROWS, "STYLE_GRID_AUTO_ROWS",
    "style_grid_auto_rows", "ردیف های خودکار شبکه", "grid-auto-rows",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_auto_rows, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_COLUMN,
                                "STYLE_GRID_COLUMN", "style_grid_column",
                                "ستون‌های شبکه", "grid-column",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid_column, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_COLUMN, "STYLE_GRID_COLUMN",
    "style_grid_column", "ستون های شبکه", "grid-column",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_column, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_COLUMN_END,
                                "STYLE_GRID_COLUMN_END",
                                "style_grid_column_end", "پایان ستون شبکه",
                                "grid-column-end",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid_column_end,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_COLUMN_START,
    "STYLE_GRID_COLUMN_START", "style_grid_column_start", "شروع ستون شبکه",
    "grid-column-start", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_column_start, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_ROW,
                                "STYLE_GRID_ROW", "style_grid_row",
                                "ردیف‌های شبکه", "grid-row",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid_row, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_ROW,
                                       "STYLE_GRID_ROW", "style_grid_row",
                                       "ردیف های شبکه", "grid-row",
                                       AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                       ast_layout_allowed_style_list_grid_row,
                                       NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_ROW_END,
                                "STYLE_GRID_ROW_END", "style_grid_row_end",
                                "پایان ردیف شبکه", "grid-row-end",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid_row_end,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_ROW_START,
                                "STYLE_GRID_ROW_START", "style_grid_row_start",
                                "شروع ردیف شبکه", "grid-row-start",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid_row_start,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE,
                                "STYLE_GRID_TEMPLATE", "style_grid_template",
                                "الگوی شبکه", "grid-template",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_grid_template,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_AREAS,
    "STYLE_GRID_TEMPLATE_AREAS", "style_grid_template_areas",
    "مناطق الگوی شبکه", "grid-template-areas",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_template_areas, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_COLUMNS,
    "STYLE_GRID_TEMPLATE_COLUMNS", "style_grid_template_columns",
    "ستون‌های الگوی شبکه", "grid-template-columns",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_template_columns, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_COLUMNS,
    "STYLE_GRID_TEMPLATE_COLUMNS", "style_grid_template_columns",
    "ستون های الگوی شبکه", "grid-template-columns",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_template_columns, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_ROWS,
    "STYLE_GRID_TEMPLATE_ROWS", "style_grid_template_rows",
    "ردیف‌های الگوی شبکه", "grid-template-rows",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_template_rows, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_GRID_TEMPLATE_ROWS,
    "STYLE_GRID_TEMPLATE_ROWS", "style_grid_template_rows",
    "ردیف های الگوی شبکه", "grid-template-rows",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_grid_template_rows, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_JUSTIFY_CONTENT,
                                "STYLE_JUSTIFY_CONTENT",
                                "style_justify_content", "توجیه محتوا",
                                "justify-content",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_justify_content,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_LEFT,
                                "STYLE_LEFT", "style_left", "چپ", "left",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_left, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_LETTER_SPACING,
                                "STYLE_LETTER_SPACING", "style_letter_spacing",
                                "فاصله بین حروف", "letter-spacing",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
                                NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_LINE_HEIGHT,
                                "STYLE_LINE_HEIGHT", "style_line_height",
                                "ارتفاع خط", "line-height",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
                                NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_LIST_STYLE,
                                "STYLE_LIST_STYLE", "style_list_style",
                                "سبک فهرست", "list-style",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_list_style, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN,
                                "STYLE_MARGIN", "style_margin", "فضا", "margin",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZES124,
                                ast_layout_allowed_style_list_margin, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_BOTTOM,
                                "STYLE_MARGIN_BOTTOM", "style_margin_bottom",
                                "فضا پایین", "margin-bottom",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_margin_bottom,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_BOTTOM, "STYLE_MARGIN_BOTTOM",
    "style_margin_bottom", "فضای پایین", "margin-bottom",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
    ast_layout_allowed_style_list_margin_bottom, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_LEFT,
                                "STYLE_MARGIN_LEFT", "style_margin_left",
                                "فضا چپ", "margin-left",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_margin_left, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_LEFT, "STYLE_MARGIN_LEFT",
    "style_margin_left", "فضای چپ", "margin-left",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
    ast_layout_allowed_style_list_margin_left, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_RIGHT,
                                "STYLE_MARGIN_RIGHT", "style_margin_right",
                                "فضا راست", "margin-right",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_margin_right,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_RIGHT, "STYLE_MARGIN_RIGHT",
    "style_margin_right", "فضای راست", "margin-right",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
    ast_layout_allowed_style_list_margin_right, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_TOP,
                                "STYLE_MARGIN_TOP", "style_margin_top",
                                "فضا بالا", "margin-top",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_margin_top, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MARGIN_TOP, "STYLE_MARGIN_TOP",
    "style_margin_top", "فضای بالا", "margin-top",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
    ast_layout_allowed_style_list_margin_top, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MAX_HEIGHT,
                                "STYLE_MAX_HEIGHT", "style_max_height",
                                "حداکثر ارتفاع", "max-height",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MAX_WIDTH,
                                "STYLE_MAX_WIDTH", "style_max_width",
                                "حداکثر عرض", "max-width",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MIN_HEIGHT,
                                "STYLE_MIN_HEIGHT", "style_min_height",
                                "حداقل ارتفاع", "min-height",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_MIN_WIDTH,
                                "STYLE_MIN_WIDTH", "style_min_width",
                                "حداقل عرض", "min-width",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OBJECT_FIT,
                                "STYLE_OBJECT_FIT", "style_object_fit",
                                "تناسب شیء", "object-fit",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_object_fit, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OPACITY,
                                "STYLE_OPACITY", "style_opacity", "شفافیت",
                                "opacity",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_PERCENTAGE,
                                NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW,
                                "STYLE_OVERFLOW", "style_overflow", "بیش از حد",
                                "overflow",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_overflow, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_X,
                                "STYLE_OVERFLOW_X", "style_overflow_x",
                                "بیش از حد (X)", "overflow-x",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_overflow_x, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_Y,
                                "STYLE_OVERFLOW_Y", "style_overflow_y",
                                "بیش از حد (Y)", "overflow-y",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_overflow_y, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING,
                                "STYLE_PADDING", "style_padding", "فاصله",
                                "padding",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZES124,
                                ast_layout_allowed_style_list_padding, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_BOTTOM,
                                "STYLE_PADDING_BOTTOM", "style_padding_bottom",
                                "فاصله پایین", "padding-bottom",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_padding_bottom,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_LEFT,
                                "STYLE_PADDING_LEFT", "style_padding_left",
                                "فاصله چپ", "padding-left",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_padding_left,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_RIGHT,
                                "STYLE_PADDING_RIGHT", "style_padding_right",
                                "فاصله راست", "padding-right",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_padding_right,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_TOP,
                                "STYLE_PADDING_TOP", "style_padding_top",
                                "فاصله بالا", "padding-top",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_padding_top, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_DECORATION,
                                "STYLE_TEXT_DECORATION",
                                "style_text_decoration", "زینت متن",
                                "text-decoration",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_text_decoration,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_TRANSFORM,
                                "STYLE_TEXT_TRANSFORM", "style_text_transform",
                                "تبدیل متن", "text-transform",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_text_transform,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_VISIBILITY,
                                "STYLE_VISIBILITY", "style_visibility",
                                "قابلیت مشاهده", "visibility",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_visibility, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_Z_INDEX,
                                "STYLE_Z_INDEX", "style_z_index",
                                "الویت موقعیت", "z-index",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER,
                                ast_layout_allowed_style_list_z_index, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_Z_INDEX, "STYLE_Z_INDEX", "style_z_index",
    "ترتیب اولویت", "z-index", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_INTEGER,
    ast_layout_allowed_style_list_z_index, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OUTLINE_COLOR,
                                "STYLE_OUTLINE_COLOR", "style_outline_color",
                                "رنگ مرز", "outline-color",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_COLOR,
                                ast_layout_allowed_style_list_outline_color,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OUTLINE_OFFSET,
                                "STYLE_OUTLINE_OFFSET", "style_outline_offset",
                                "فاصله حاشیه", "outline-offset",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OUTLINE_STYLE,
                                "STYLE_OUTLINE_STYLE", "style_outline_style",
                                "سبک حاشیه", "outline-style",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_outline_style,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OUTLINE_WIDTH,
                                "STYLE_OUTLINE_WIDTH", "style_outline_width",
                                "عرض حاشیه", "outline-width",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_outline_width,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_ANCHOR,
                                "STYLE_OVERFLOW_ANCHOR",
                                "style_overflow_anchor", "لنگر بیش از حد",
                                "overflow-anchor",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_overflow_anchor,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_BLOCK,
                                "STYLE_OVERFLOW_BLOCK", "style_overflow_block",
                                "بیش از حد بلوک", "overflow-block",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_overflow_block,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_CLIP_MARGIN,
    "STYLE_OVERFLOW_CLIP_MARGIN", "style_overflow_clip_margin",
    "فاصله برش بیش از حد", "overflow-clip-margin",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_INLINE,
                                "STYLE_OVERFLOW_INLINE",
                                "style_overflow_inline", "بیش از حد درون خطی",
                                "overflow-inline",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_overflow_inline,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_OVERFLOW_WRAP,
                                "STYLE_OVERFLOW_WRAP", "style_overflow_wrap",
                                "پیچش بیش از حد", "overflow-wrap",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_overflow_wrap,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_BLOCK,
                                "STYLE_PADDING_BLOCK", "style_padding_block",
                                "فاصله بلوک", "padding-block",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_BLOCK_END,
    "STYLE_PADDING_BLOCK_END", "style_padding_block_end", "فاصله انتهای بلوک",
    "padding-block-end", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_padding_block_end, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_BLOCK_START,
    "STYLE_PADDING_BLOCK_START", "style_padding_block_start", "فاصله شروع بلوک",
    "padding-block-start", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_padding_block_start, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_INLINE,
                                "STYLE_PADDING_INLINE", "style_padding_inline",
                                "فاصله درون خطی", "padding-inline",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_padding_inline,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_INLINE_END,
    "STYLE_PADDING_INLINE_END", "style_padding_inline_end",
    "فاصله انتهای درون خطی", "padding-inline-end",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_padding_inline_end, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PADDING_INLINE_START,
    "STYLE_PADDING_INLINE_START", "style_padding_inline_start",
    "فاصله شروع درون خطی", "padding-inline-start",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_padding_inline_start, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAGE,
                                "STYLE_PAGE", "style_page", "صفحه", "page",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_page, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAGE_BREAK_AFTER, "STYLE_PAGE_BREAK_AFTER",
    "style_page_break_after", "شکست صفحه بعد از", "page-break-after",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_page_break_after, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAGE_BREAK_BEFORE,
    "STYLE_PAGE_BREAK_BEFORE", "style_page_break_before", "شکست صفحه قبل از",
    "page-break-before", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_page_break_before, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAGE_BREAK_INSIDE,
    "STYLE_PAGE_BREAK_INSIDE", "style_page_break_inside", "شکست صفحه درون",
    "page-break-inside", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_page_break_inside, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PAINT_ORDER,
                                "STYLE_PAINT_ORDER", "style_paint_order",
                                "ترتیب نقاشی", "paint-order",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_paint_order, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PERSPECTIVE,
                                "STYLE_PERSPECTIVE", "style_perspective",
                                "پرسپکتیو", "perspective",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_perspective, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PERSPECTIVE_ORIGIN,
    "STYLE_PERSPECTIVE_ORIGIN", "style_perspective_origin", "مبدأ پرسپکتیو",
    "perspective-origin", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY, NULL,
    NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PLACE_CONTENT,
                                "STYLE_PLACE_CONTENT", "style_place_content",
                                "محتوای مکان", "place-content",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_place_content,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PLACE_ITEMS,
                                "STYLE_PLACE_ITEMS", "style_place_items",
                                "موارد مکان", "place-items",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_place_items, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PLACE_SELF,
                                "STYLE_PLACE_SELF", "style_place_self",
                                "خود مکان", "place-self",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_place_self, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_POINTER_EVENTS,
                                "STYLE_POINTER_EVENTS", "style_pointer_events",
                                "رویدادهای اشاره‌گر",
                                "pointer-events",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_pointer_events,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_POINTER_EVENTS, "STYLE_POINTER_EVENTS",
    "style_pointer_events", "رویدادهای اشاره گر", "pointer-events",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_pointer_events, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_POSITION,
                                "STYLE_POSITION", "style_position", "موقعیت",
                                "position",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_position, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_PRINT_COLOR_ADJUST,
    "STYLE_PRINT_COLOR_ADJUST", "style_print_color_adjust", "تنظیم رنگ چاپ",
    "print-color-adjust", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_print_color_adjust, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_QUOTES,
                                "STYLE_QUOTES", "style_quotes",
                                "نقل‌قول", "quotes",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_quotes, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_QUOTES,
                                       "STYLE_QUOTES", "style_quotes",
                                       "نقل قول", "quotes",
                                       AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                       ast_layout_allowed_style_list_quotes,
                                       NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_R, "STYLE_R",
                                "style_r", "شعاع", "r",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RESIZE,
                                "STYLE_RESIZE", "style_resize", "تغییر اندازه",
                                "resize",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_resize, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RIGHT,
                                "STYLE_RIGHT", "style_right", "راست", "right",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_right, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ROTATE,
                                "STYLE_ROTATE", "style_rotate", "چرخش",
                                "rotate",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_rotate, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ROW_GAP,
                                "STYLE_ROW_GAP", "style_row_gap", "فاصله ردیف",
                                "row-gap",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RUBY_ALIGN,
                                "STYLE_RUBY_ALIGN", "style_ruby_align",
                                "هم‌راستایی روبی", "ruby-align",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_ruby_align, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RUBY_ALIGN, "STYLE_RUBY_ALIGN",
    "style_ruby_align", "هم راستایی روبی", "ruby-align",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_ruby_align, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RUBY_POSITION,
                                "STYLE_RUBY_POSITION", "style_ruby_position",
                                "موقعیت روبی", "ruby-position",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_ruby_position,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RX, "STYLE_RX",
                                "style_rx", "شعاع X", "rx",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_RY, "STYLE_RY",
                                "style_ry", "شعاع Y", "ry",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCALE,
                                "STYLE_SCALE", "style_scale", "مقیاس", "scale",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
                                NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_BEHAVIOR,
                                "STYLE_SCROLL_BEHAVIOR",
                                "style_scroll_behavior", "رفتار پیمایش",
                                "scroll-behavior",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_scroll_behavior,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN,
                                "STYLE_SCROLL_MARGIN", "style_scroll_margin",
                                "فاصله پیمایش", "scroll-margin",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_BLOCK,
    "STYLE_SCROLL_MARGIN_BLOCK", "style_scroll_margin_block",
    "فاصله بلوک پیمایش", "scroll-margin-block",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_BLOCK_END,
    "STYLE_SCROLL_MARGIN_BLOCK_END", "style_scroll_margin_block_end",
    "فاصله انتهای بلوک پیمایش", "scroll-margin-block-end",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_BLOCK_START,
    "STYLE_SCROLL_MARGIN_BLOCK_START", "style_scroll_margin_block_start",
    "فاصله شروع بلوک پیمایش", "scroll-margin-block-start",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_BOTTOM,
    "STYLE_SCROLL_MARGIN_BOTTOM", "style_scroll_margin_bottom",
    "فاصله پایین پیمایش", "scroll-margin-bottom",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_INLINE,
    "STYLE_SCROLL_MARGIN_INLINE", "style_scroll_margin_inline",
    "فاصله درون خطی پیمایش", "scroll-margin-inline",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_INLINE_END,
    "STYLE_SCROLL_MARGIN_INLINE_END", "style_scroll_margin_inline_end",
    "فاصله انتهای درون خطی پیمایش", "scroll-margin-inline-end",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_INLINE_START,
    "STYLE_SCROLL_MARGIN_INLINE_START", "style_scroll_margin_inline_start",
    "فاصله شروع درون خطی پیمایش", "scroll-margin-inline-start",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_LEFT,
    "STYLE_SCROLL_MARGIN_LEFT", "style_scroll_margin_left", "فاصله چپ پیمایش",
    "scroll-margin-left", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_RIGHT,
    "STYLE_SCROLL_MARGIN_RIGHT", "style_scroll_margin_right",
    "فاصله راست پیمایش", "scroll-margin-right",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_MARGIN_TOP,
    "STYLE_SCROLL_MARGIN_TOP", "style_scroll_margin_top", "فاصله بالا پیمایش",
    "scroll-margin-top", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING,
                                "STYLE_SCROLL_PADDING", "style_scroll_padding",
                                "فاصله پیمایش", "scroll-padding",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_BLOCK,
    "STYLE_SCROLL_PADDING_BLOCK", "style_scroll_padding_block",
    "فاصله بلوک پیمایش", "scroll-padding-block",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_BLOCK_END,
    "STYLE_SCROLL_PADDING_BLOCK_END", "style_scroll_padding_block_end",
    "فاصله انتهای بلوک پیمایش", "scroll-padding-block-end",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_BLOCK_START,
    "STYLE_SCROLL_PADDING_BLOCK_START", "style_scroll_padding_block_start",
    "فاصله شروع بلوک پیمایش", "scroll-padding-block-start",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_BOTTOM,
    "STYLE_SCROLL_PADDING_BOTTOM", "style_scroll_padding_bottom",
    "فاصله پایین پیمایش", "scroll-padding-bottom",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_INLINE,
    "STYLE_SCROLL_PADDING_INLINE", "style_scroll_padding_inline",
    "فاصله درون خطی پیمایش", "scroll-padding-inline",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_INLINE_END,
    "STYLE_SCROLL_PADDING_INLINE_END", "style_scroll_padding_inline_end",
    "فاصله انتهای درون خطی پیمایش", "scroll-padding-inline-end",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_INLINE_START,
    "STYLE_SCROLL_PADDING_INLINE_START", "style_scroll_padding_inline_start",
    "فاصله شروع درون خطی پیمایش", "scroll-padding-inline-start",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_LEFT,
    "STYLE_SCROLL_PADDING_LEFT", "style_scroll_padding_left", "فاصله چپ پیمایش",
    "scroll-padding-left", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_RIGHT,
    "STYLE_SCROLL_PADDING_RIGHT", "style_scroll_padding_right",
    "فاصله راست پیمایش", "scroll-padding-right",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_PADDING_TOP,
    "STYLE_SCROLL_PADDING_TOP", "style_scroll_padding_top", "فاصله بالا پیمایش",
    "scroll-padding-top", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_SNAP_ALIGN,
    "STYLE_SCROLL_SNAP_ALIGN", "style_scroll_snap_align", "تراز پیمایش",
    "scroll-snap-align", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_scroll_snap_align, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SCROLL_SNAP_TYPE, "STYLE_SCROLL_SNAP_TYPE",
    "style_scroll_snap_type", "نوع پیمایش", "scroll-snap-type",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_scroll_snap_type, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_SHAPE_OUTSIDE,
                                "STYLE_SHAPE_OUTSIDE", "style_shape_outside",
                                "شکل خارج", "shape-outside",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_shape_outside,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_ALIGN,
                                "STYLE_TEXT_ALIGN", "style_text_align",
                                "تراز متن", "text-align",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_text_align, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_ALIGN_LAST,
                                "STYLE_TEXT_ALIGN_LAST",
                                "style_text_align_last", "تراز آخرین متن",
                                "text-align-last",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_text_align_last,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ALIGN_ITEMS,
                                "STYLE_ALIGN_ITEMS", "style_align_items",
                                "تراز‌کردن‌ اقلام",
                                "align-items",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_align_items, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ALIGN_ITEMS, "STYLE_ALIGN_ITEMS",
    "style_align_items", "تراز‌ کردن‌ اقلام", "align-items",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_align_items, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ALIGN_ITEMS, "STYLE_ALIGN_ITEMS",
    "style_align_items", "تراز‌کردن‌ محتوا", "align-items",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_align_items, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ALIGN_ITEMS, "STYLE_ALIGN_ITEMS",
    "style_align_items", "تراز کردن محتوا", "align-items",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_align_items, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ALIGN_ITEMS, "STYLE_ALIGN_ITEMS",
    "style_align_items", "تراز محتوا", "align-items",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_align_items, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TEXT_INDENT,
                                "STYLE_TEXT_INDENT", "style_text_indent",
                                "تورفتگی متن", "text-indent",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_text_indent, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TOP,
                                "STYLE_TOP", "style_top", "بالا", "top",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                ast_layout_allowed_style_list_top, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSFORM,
                                "STYLE_TRANSFORM", "style_transform", "تبدیل",
                                "transform",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
                                ast_layout_allowed_style_list_transform, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSFORM_ORIGIN, "STYLE_TRANSFORM_ORIGIN",
    "style_transform_origin", "مرکز تبدیل", "transform-origin",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_transform_origin, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSLATE,
                                "STYLE_TRANSLATE", "style_translate", "ترجمه",
                                "translate",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_UNICODE_BIDI,
                                "STYLE_UNICODE_BIDI", "style_unicode_bidi",
                                "معکوس یونیکد", "unicode-bidi",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_unicode_bidi,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_USER_SELECT,
                                "STYLE_USER_SELECT", "style_user_select",
                                "انتخاب کاربر", "user-select",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_user_select, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WILL_CHANGE,
                                "STYLE_WILL_CHANGE", "style_will_change",
                                "تغییر خواهد کرد", "will-change",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_will_change, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSFORM_BOX,
                                "STYLE_TRANSFORM_BOX", "style_transform_box",
                                "باکس تبدیل", "transform-box",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_transform_box,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSFORM_STYLE,
                                "STYLE_TRANSFORM_STYLE",
                                "style_transform_style", "سبک تبدیل",
                                "transform-style",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_transform_style,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION,
                                "STYLE_TRANSITION", "style_transition",
                                "انتقال", "transition",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY,
                                ast_layout_allowed_style_list_transition, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_BEHAVIOR,
    "STYLE_TRANSITION_BEHAVIOR", "style_transition_behavior", "رفتار انتقال",
    "transition-behavior", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_transition_behavior, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_DELAY, "STYLE_TRANSITION_DELAY",
    "style_transition_delay", "تاخیر انتقال", "transition-delay",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_TIME,
    ast_layout_allowed_style_list_transition_delay, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_DURATION,
    "STYLE_TRANSITION_DURATION", "style_transition_duration", "مدت انتقال",
    "transition-duration", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_TIME,
    ast_layout_allowed_style_list_transition_duration, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_PROPERTY,
    "STYLE_TRANSITION_PROPERTY", "style_transition_property", "ویژگی انتقال",
    "transition-property", AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_transition_property, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_TIMING_FUNCTION,
    "STYLE_TRANSITION_TIMING_FUNCTION", "style_transition_timing_function",
    "تابع زمان‌بندی انتقال", "transition-timing-function",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_transition_timing_function, NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(
    AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_TRANSITION_TIMING_FUNCTION,
    "STYLE_TRANSITION_TIMING_FUNCTION", "style_transition_timing_function",
    "تابع زمان بندی انتقال", "transition-timing-function",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
    ast_layout_allowed_style_list_transition_timing_function, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_VECTOR_EFFECT,
                                "STYLE_VECTOR_EFFECT", "style_vector_effect",
                                "اثر وکتور", "vector-effect",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_vector_effect,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_VERTICAL_ALIGN,
                                "STYLE_VERTICAL_ALIGN", "style_vertical_align",
                                "تراز عمودی", "vertical-align",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_vertical_align,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WHITE_SPACE,
                                "STYLE_WHITE_SPACE", "style_white_space",
                                "فضای سفید", "white-space",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_white_space, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WIDOWS,
                                "STYLE_WIDOWS", "style_widows",
                                "بیوه‌ها", "widows",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)
ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_REPEAT(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WIDOWS,
                                       "STYLE_WIDOWS", "style_widows",
                                       "بیوه ها", "widows",
                                       AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE,
                                       NULL, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WORD_BREAK,
                                "STYLE_WORD_BREAK", "style_word_break",
                                "شکستن کلمه", "word-break",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_word_break, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WORD_SPACING,
                                "STYLE_WORD_SPACING", "style_word_spacing",
                                "فاصله کلمه", "word-spacing",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_SIZE, NULL,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_WRITING_MODE,
                                "STYLE_WRITING_MODE", "style_writing_mode",
                                "حالت نوشتن", "writing-mode",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_writing_mode,
                                NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE(AST_LAYOUT_ATTRIBUTE_STYLE_TYPE_ZOOM,
                                "STYLE_ZOOM", "style_zoom", "بزرگنمایی", "zoom",
                                AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING,
                                ast_layout_allowed_style_list_zoom, NULL)

ADD_LAYOUT_ATTRIBUTE_STYLE_TYPE_HIDE(
    AST_LAYOUT_ATTRIBUTE_TYPE_ERROR, "ERROR", "error", "error", "error",
    AST_LAYOUY_ATTRIBUTE_STYLE_FILTER_STRING_ANY, NULL, NULL)
