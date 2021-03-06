#pragma once
#pragma once
/* NINJA Basic (with Sonic Adventure DX additions) model
*
* Generated by SAMDL
*
*/

#include "ninja.h"
#include "SADXModLoader.h"

#include "Flower1.h"

NJS_MATERIAL FlowerMatlist[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, CHAOTexName_hana2_happa, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, CHAOTexName_hana2_hanaw, NJD_D_075 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};


NJS_MODEL_SADX FlowerAttach = { vertex_001544E4, normal_001548A4, LengthOfArray<Sint32>(vertex_001544E4), meshlist_001544B4, FlowerMatlist, LengthOfArray<Uint16>(meshlist_001544B4), LengthOfArray<Uint16>(matlist_00154250),{ -0.507136f, 1.307578f, 0.442062f }, 2.578781f, NULL };


NJS_OBJECT Flower = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &FlowerAttach, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
