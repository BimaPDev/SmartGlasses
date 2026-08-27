/* FUN_140be984 @ 0x140be984 */

undefined4 FUN_140be984(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = *DAT_140be9f8;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_140de9d8(DAT_140be9fc,0x800,param_1,&uStack_c,&uStack_c);
  if (-1 < iVar1) {
    if (iVar1 < 0x7ff) {
      if (iVar1 == 0) goto LAB_140be9b4;
    }
    else {
      iVar1 = 0x7ff;
    }
    if (*DAT_140bea00 == '\0') {
      pcVar2 = (code *)FUN_140be698();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(DAT_140be9fc,iVar1);
      }
    }
    else {
      FUN_14029fb8(DAT_140be9fc,iVar1);
    }
  }
LAB_140be9b4:
  if (*DAT_140be9f8 == iVar3) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

