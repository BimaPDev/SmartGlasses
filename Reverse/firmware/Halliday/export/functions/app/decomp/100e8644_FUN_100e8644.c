/* FUN_100e8644 @ 0x100e8644 */

uint FUN_100e8644(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_100a5b78(((int)PTR_DAT_100e86b0 - (int)PTR_DAT_100e86b4) * 0x20 & 0xff00U | 0x4a80011,
                 PTR_s__try_get_cached_index_100e86bc,PTR_s_null_glyph_cache_100e86b8);
  }
  else if (*(uint *)(param_1 + 8) != 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    uVar2 = *(uint *)(param_1 + 200);
    uVar1 = uVar2;
    if (*(int *)(iVar3 + uVar2 * 4) == param_2) {
      return uVar2;
    }
    do {
      uVar1 = uVar1 + 1;
      if (*(uint *)(param_1 + 8) <= uVar1) goto LAB_100e868c;
    } while (*(int *)(iVar3 + uVar1 * 4) != param_2);
    goto LAB_100e86a4;
  }
  return 0xffffffff;
LAB_100e868c:
  do {
    uVar1 = uVar2 - 1;
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
    uVar2 = uVar1;
  } while (*(int *)(iVar3 + uVar1 * 4) != param_2);
LAB_100e86a4:
  *(uint *)(param_1 + 200) = uVar1;
  return uVar1;
}

