/* FUN_100826d0 @ 0x100826d0 */

int FUN_100826d0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
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
      *DAT_100827a4 = uVar2;
      uVar4 = param_3 >> 9 | param_4 << 0x17;
      uVar5 = param_7 >> 9 | param_8 << 0x17;
      if ((*DAT_100827a8 != '\0') && (iVar1 = FUN_10082294(DAT_100827ac), iVar1 != 0)) {
        FUN_10119dc2(DAT_100827b0);
LAB_10082740:
        FUN_10081e54();
        return iVar1;
      }
      if (*DAT_100827b4 == '\0') {
        FUN_10119dc2(DAT_100827bc,DAT_100827b8);
      }
      else {
        iVar1 = (param_4 >> 9) + (param_8 >> 9) + (uint)CARRY4(uVar4,uVar5);
        uVar3 = *DAT_100827c0;
        bVar6 = iVar1 == 0;
        if (iVar1 == 0) {
          bVar6 = uVar4 + uVar5 <= uVar3;
        }
        if (bVar6) {
          iVar1 = FUN_1011fefe(DAT_100827ac,uVar4,param_5,uVar5);
          goto LAB_10082740;
        }
        FUN_10119dc2(DAT_100827c4,DAT_100827b8,uVar4,uVar3,uVar5,param_8 >> 9,uVar3);
      }
      FUN_10081e54();
    }
  }
  else {
    FUN_10119dc2(DAT_100827a0,param_3,param_7);
  }
  return -1;
}

