/* FUN_100825d8 @ 0x100825d8 */

int FUN_100825d8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,uint param_7,uint param_8)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (((param_3 | param_7) & 0x1ff) == 0) {
    iVar1 = FUN_10081e24();
    if (iVar1 == 0) {
      FUN_10081e6c();
      uVar2 = FUN_10061948();
      *DAT_100826ac = uVar2;
      uVar4 = param_3 >> 9 | param_4 << 0x17;
      uVar5 = param_7 >> 9 | param_8 << 0x17;
      if ((*DAT_100826b0 != '\0') && (iVar1 = FUN_10082294(DAT_100826b4), iVar1 != 0)) {
        FUN_10119dc2(DAT_100826b8);
LAB_10082648:
        FUN_10081e54();
        return iVar1;
      }
      if (*DAT_100826bc == '\0') {
        FUN_10119dc2(DAT_100826c4,DAT_100826c0);
      }
      else {
        iVar1 = (param_4 >> 9) + (param_8 >> 9) + (uint)CARRY4(uVar4,uVar5);
        uVar3 = *DAT_100826c8;
        bVar6 = iVar1 == 0;
        if (iVar1 == 0) {
          bVar6 = uVar4 + uVar5 <= uVar3;
        }
        if (bVar6) {
          iVar1 = FUN_1007db04(DAT_100826b4,uVar4,param_5,uVar5);
          goto LAB_10082648;
        }
        FUN_10119dc2(DAT_100826cc,DAT_100826c0,uVar4,uVar3,uVar5,param_8 >> 9,uVar3);
      }
      FUN_10081e54();
    }
  }
  else {
    FUN_10119dc2(DAT_100826a8,param_3,param_7);
  }
  return -1;
}

