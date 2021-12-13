/**raw
 * @file lv_draw_sw.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../lv_draw.h"
#include "lv_draw_sw.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  GLOBAL PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_draw_sw_init_ctx(lv_disp_drv_t * drv, lv_draw_ctx_t * draw)
{
    lv_draw_sw_ctx_t * draw_sw_ctx = (lv_draw_sw_ctx_t *) draw;
    lv_memset_00(draw_sw_ctx, sizeof(lv_draw_sw_ctx_t));

    draw_sw_ctx->base_draw.draw_arc = lv_draw_sw_arc;
    draw_sw_ctx->base_draw.draw_rect = lv_draw_sw_rect;
    draw_sw_ctx->base_draw.draw_letter = lv_draw_sw_letter;
    draw_sw_ctx->base_draw.draw_img = lv_draw_sw_img;
    draw_sw_ctx->base_draw.draw_line = lv_draw_sw_line;
    draw_sw_ctx->base_draw.draw_polygon = lv_draw_sw_polygon;
    draw_sw_ctx->blend = lv_draw_sw_blend;
}

void lv_draw_sw_deinit_ctx(lv_disp_drv_t * drv, lv_draw_ctx_t * draw)
{
    lv_draw_sw_ctx_t * draw_sw_ctx = (lv_draw_sw_ctx_t *) draw;
    lv_memset_00(draw_sw_ctx, sizeof(lv_draw_sw_ctx_t));
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
