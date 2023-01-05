// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: ssd1963_50_800x480_demo

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Screen1_Button1;
lv_obj_t *ui_Screen1_Button2;
lv_obj_t *ui_Screen1_Button3;
lv_obj_t *ui_Screen1_Label1;
lv_obj_t *ui_Screen1_Label2;
lv_obj_t *ui_Screen1_Label3;
lv_obj_t *ui_Screen1_Button4;
lv_obj_t *ui_Screen1_Label4;
lv_obj_t *ui_Screen1_Label5;
lv_obj_t *ui_Screen1_Slider1;
lv_obj_t *ui_Screen1_Switch1;
lv_obj_t *ui_Screen1_Switch2;
lv_obj_t *ui_Screen1_Switch3;
lv_obj_t *ui_Screen1_Label6;
lv_obj_t *ui_Screen1_Label7;
lv_obj_t *ui_Screen1_Label8;
lv_obj_t *ui_Screen1_Colorwheel1;
lv_obj_t *ui_Screen1_Label9;
lv_obj_t *ui_Screen1_Label10;
lv_obj_t *ui_Screen1_Label11;
lv_obj_t *ui_Screen1_Checkbox1;
lv_obj_t *ui_Screen1_Checkbox2;
lv_obj_t *ui_Screen1_Checkbox3;
lv_obj_t *ui_Screen1_Dropdown1;
lv_obj_t *ui_Screen1_Button5;
lv_obj_t *ui_Screen1_Label12;
lv_obj_t *ui_Screen1_Button6;
lv_obj_t *ui_Screen1_Label13;
lv_obj_t *ui_Screen1_Button7;
lv_obj_t *ui_Screen1_Label14;
lv_obj_t *ui_Screen1_Image1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Button1 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button1, 100);
lv_obj_set_height( ui_Screen1_Button1, 50);
lv_obj_set_x( ui_Screen1_Button1, 333 );
lv_obj_set_y( ui_Screen1_Button1, -181 );
lv_obj_set_align( ui_Screen1_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Button2 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button2, 100);
lv_obj_set_height( ui_Screen1_Button2, 50);
lv_obj_set_x( ui_Screen1_Button2, 333 );
lv_obj_set_y( ui_Screen1_Button2, -120 );
lv_obj_set_align( ui_Screen1_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Button3 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button3, 100);
lv_obj_set_height( ui_Screen1_Button3, 50);
lv_obj_set_x( ui_Screen1_Button3, 333 );
lv_obj_set_y( ui_Screen1_Button3, 2 );
lv_obj_set_align( ui_Screen1_Button3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Label1 = lv_label_create(ui_Screen1_Button3);
lv_obj_set_width( ui_Screen1_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label1, 268 );
lv_obj_set_y( ui_Screen1_Label1, 23 );
lv_obj_set_align( ui_Screen1_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label1,"START");

ui_Screen1_Label2 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label2, 331 );
lv_obj_set_y( ui_Screen1_Label2, 4 );
lv_obj_set_align( ui_Screen1_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label2,"STOP");

ui_Screen1_Label3 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label3, 334 );
lv_obj_set_y( ui_Screen1_Label3, -178 );
lv_obj_set_align( ui_Screen1_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label3,"OK");

ui_Screen1_Button4 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button4, 100);
lv_obj_set_height( ui_Screen1_Button4, 50);
lv_obj_set_x( ui_Screen1_Button4, 333 );
lv_obj_set_y( ui_Screen1_Button4, -59 );
lv_obj_set_align( ui_Screen1_Button4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Label4 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label4, 332 );
lv_obj_set_y( ui_Screen1_Label4, -58 );
lv_obj_set_align( ui_Screen1_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label4,"START");

ui_Screen1_Label5 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label5, 333 );
lv_obj_set_y( ui_Screen1_Label5, -118 );
lv_obj_set_align( ui_Screen1_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label5,"CANCEL");

ui_Screen1_Slider1 = lv_slider_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Slider1, 331);
lv_obj_set_height( ui_Screen1_Slider1, 34);
lv_obj_set_x( ui_Screen1_Slider1, 64 );
lv_obj_set_y( ui_Screen1_Slider1, 207 );
lv_obj_set_align( ui_Screen1_Slider1, LV_ALIGN_CENTER );

ui_Screen1_Switch1 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Switch1, 54);
lv_obj_set_height( ui_Screen1_Switch1, 32);
lv_obj_set_x( ui_Screen1_Switch1, -338 );
lv_obj_set_y( ui_Screen1_Switch1, -165 );
lv_obj_set_align( ui_Screen1_Switch1, LV_ALIGN_CENTER );
lv_obj_add_state( ui_Screen1_Switch1, LV_STATE_CHECKED );     /// States

ui_Screen1_Switch2 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Switch2, 54);
lv_obj_set_height( ui_Screen1_Switch2, 32);
lv_obj_set_x( ui_Screen1_Switch2, -338 );
lv_obj_set_y( ui_Screen1_Switch2, -114 );
lv_obj_set_align( ui_Screen1_Switch2, LV_ALIGN_CENTER );
lv_obj_add_state( ui_Screen1_Switch2, LV_STATE_CHECKED );     /// States

ui_Screen1_Switch3 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Switch3, 54);
lv_obj_set_height( ui_Screen1_Switch3, 32);
lv_obj_set_x( ui_Screen1_Switch3, -338 );
lv_obj_set_y( ui_Screen1_Switch3, -59 );
lv_obj_set_align( ui_Screen1_Switch3, LV_ALIGN_CENTER );
lv_obj_add_state( ui_Screen1_Switch3, LV_STATE_CHECKED );     /// States

ui_Screen1_Label6 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label6, 334 );
lv_obj_set_y( ui_Screen1_Label6, -216 );
lv_obj_set_align( ui_Screen1_Label6, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label6,"Buttons");

ui_Screen1_Label7 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label7, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label7, -340 );
lv_obj_set_y( ui_Screen1_Label7, -203 );
lv_obj_set_align( ui_Screen1_Label7, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label7,"Switches");

ui_Screen1_Label8 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label8, 46 );
lv_obj_set_y( ui_Screen1_Label8, 169 );
lv_obj_set_align( ui_Screen1_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label8,"Slider");

ui_Screen1_Colorwheel1 = lv_colorwheel_create(ui_Screen1,true);
lv_obj_set_width( ui_Screen1_Colorwheel1, 200);
lv_obj_set_height( ui_Screen1_Colorwheel1, 200);
lv_obj_set_x( ui_Screen1_Colorwheel1, -273 );
lv_obj_set_y( ui_Screen1_Colorwheel1, 108 );
lv_obj_set_align( ui_Screen1_Colorwheel1, LV_ALIGN_CENTER );

ui_Screen1_Label9 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label9, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label9, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label9, -79 );
lv_obj_set_y( ui_Screen1_Label9, -140 );
lv_obj_set_align( ui_Screen1_Label9, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label9,"Teensy 4.0 with \n800x480 5\" LCD\nDemo");
lv_obj_set_style_text_font(ui_Screen1_Label9, &lv_font_montserrat_46, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label10 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label10, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label10, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label10, -281 );
lv_obj_set_y( ui_Screen1_Label10, -12 );
lv_obj_set_align( ui_Screen1_Label10, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label10,"Colour wheel");

ui_Screen1_Label11 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label11, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label11, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label11, -183 );
lv_obj_set_y( ui_Screen1_Label11, -48 );
lv_obj_set_align( ui_Screen1_Label11, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label11,"www.skpang.co.uk");
lv_obj_set_style_text_color(ui_Screen1_Label11, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen1_Label11, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen1_Label11, &lv_font_montserrat_16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Checkbox1 = lv_checkbox_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Checkbox1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Checkbox1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Checkbox1, -93 );
lv_obj_set_y( ui_Screen1_Checkbox1, 26 );
lv_obj_set_align( ui_Screen1_Checkbox1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Checkbox1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags

ui_Screen1_Checkbox2 = lv_checkbox_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Checkbox2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Checkbox2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Checkbox2, -93 );
lv_obj_set_y( ui_Screen1_Checkbox2, 77 );
lv_obj_set_align( ui_Screen1_Checkbox2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Checkbox2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags

ui_Screen1_Checkbox3 = lv_checkbox_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Checkbox3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Checkbox3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Checkbox3, -93 );
lv_obj_set_y( ui_Screen1_Checkbox3, 126 );
lv_obj_set_align( ui_Screen1_Checkbox3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Checkbox3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags

ui_Screen1_Dropdown1 = lv_dropdown_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Dropdown1, 150);
lv_obj_set_height( ui_Screen1_Dropdown1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Dropdown1, 193 );
lv_obj_set_y( ui_Screen1_Dropdown1, -185 );
lv_obj_set_align( ui_Screen1_Dropdown1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags

ui_Screen1_Button5 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button5, 100);
lv_obj_set_height( ui_Screen1_Button5, 50);
lv_obj_set_x( ui_Screen1_Button5, 333 );
lv_obj_set_y( ui_Screen1_Button5, 85 );
lv_obj_set_align( ui_Screen1_Button5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1_Button5, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Button5, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label12 = lv_label_create(ui_Screen1_Button5);
lv_obj_set_width( ui_Screen1_Label12, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label12, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label12, 268 );
lv_obj_set_y( ui_Screen1_Label12, 23 );
lv_obj_set_align( ui_Screen1_Label12, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label12,"START");

ui_Screen1_Button6 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button6, 100);
lv_obj_set_height( ui_Screen1_Button6, 50);
lv_obj_set_x( ui_Screen1_Button6, 333 );
lv_obj_set_y( ui_Screen1_Button6, 206 );
lv_obj_set_align( ui_Screen1_Button6, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1_Button6, lv_color_hex(0x0000FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Button6, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label13 = lv_label_create(ui_Screen1_Button6);
lv_obj_set_width( ui_Screen1_Label13, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label13, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label13, 268 );
lv_obj_set_y( ui_Screen1_Label13, 23 );
lv_obj_set_align( ui_Screen1_Label13, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label13,"START");

ui_Screen1_Button7 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button7, 100);
lv_obj_set_height( ui_Screen1_Button7, 50);
lv_obj_set_x( ui_Screen1_Button7, 333 );
lv_obj_set_y( ui_Screen1_Button7, 146 );
lv_obj_set_align( ui_Screen1_Button7, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1_Button7, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Button7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label14 = lv_label_create(ui_Screen1_Button7);
lv_obj_set_width( ui_Screen1_Label14, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label14, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label14, 268 );
lv_obj_set_y( ui_Screen1_Label14, 23 );
lv_obj_set_align( ui_Screen1_Label14, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label14,"START");

ui_Screen1_Image1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Screen1_Image1, &ui_img_compass_inverted_png);
lv_obj_set_width( ui_Screen1_Image1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Image1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Image1, 121 );
lv_obj_set_y( ui_Screen1_Image1, 22 );
lv_obj_set_align( ui_Screen1_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Screen1_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_angle(ui_Screen1_Image1,450);

}

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
lv_disp_load_scr( ui_Screen1);
}
