/* FUN_100e8784 @ 0x100e8784 */

int FUN_100e8784(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_100a5b78(((int)PTR_DAT_100e87e0 - (int)PTR_DAT_100e87e4) * 0x20 & 0xff00U | 0x5080011,
                 PTR_s__get_glyph_cache_100e87ec,PTR_s_null_glyph_cache_100e87e8,PTR_DAT_100e87e4,0,
                 param_2);
    iVar2 = 0;
  }
  else {
    iVar2 = param_1;
    iVar1 = FUN_100e8644();
    if (iVar1 < 0) {
      FUN_100a5b78(DAT_100e87f0 | ((int)PTR_DAT_100e87e0 - (int)PTR_DAT_100e87e4) * 0x20 & 0xff00U,
                   PTR_s__get_glyph_cache_100e87ec,DAT_100e87f4,param_2,iVar2);
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38) * iVar1 + *(int *)(param_1 + 0x14);
    }
  }
  return iVar2;
}

