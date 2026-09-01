/* FUN_100bf2b8 @ 0x100bf2b8 */

void FUN_100bf2b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint3 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_14;
  
  iVar1 = DAT_100bf340;
  uStack_14 = (uint)param_4;
  if (*(char *)(DAT_100bf340 + 0xc) < 0) {
    FUN_1011dbf4(DAT_100bf344,0xffffffff,param_3,(int)*(char *)(DAT_100bf340 + 0xc),param_1,param_2,
                 param_3);
    *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) & 0x7f;
    iVar3 = DAT_100bf348;
    FUN_10132400((int)&uStack_14 + 3);
    FUN_100a5b78(DAT_100bf350 | (iVar3 - DAT_100bf34c) * 0x20 & 0xff00U,DAT_100bf358,DAT_100bf354,
                 uStack_14._3_1_,*(undefined1 *)(iVar1 + 0xf));
    if (*(char *)(iVar1 + 0xf) == '\x01') {
      iVar3 = FUN_10061fd0(iVar1 + 0x148);
      if (iVar3 != 0) {
        FUN_100be32c(0,0);
      }
      uVar2 = DAT_100bf35c;
      *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfe;
      FUN_1013cb84(uVar2);
    }
    if (uStack_14._3_1_ != '\0') {
      FUN_101323d0();
    }
    thunk_FUN_10113e2c(DAT_100bf344);
  }
  return;
}

