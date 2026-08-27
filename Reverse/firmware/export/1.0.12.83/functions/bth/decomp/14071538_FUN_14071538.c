/* FUN_14071538 @ 0x14071538 */

undefined4 FUN_14071538(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_14071614;
  if (1 < param_1) {
    return 0x43;
  }
  iVar5 = *(int *)(DAT_14071614 + (param_1 + 6) * 4);
  if (((iVar5 != 0) && (param_2 < *(byte *)(iVar5 + 0x3c))) &&
     (iVar3 = *(int *)(iVar5 + (param_2 + 0x10) * 4), iVar3 != 0)) {
    uVar1 = *(ushort *)(iVar3 + 0x12) & 0xfffd;
    if (param_4 == 0) {
      *(ushort *)(iVar3 + 0x12) = uVar1 | 2;
      if ((*(byte *)(iVar5 + 0x30) == param_2) && ((int)((uint)*(byte *)(iVar5 + 0x3a) << 0x1e) < 0)
         ) {
        iVar4 = *(int *)(iVar3 + 4);
        if (iVar4 != 0) {
          if ((int)((uint)*(byte *)(iVar4 + 0x2d) << 0x1c) < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + ((*(byte *)(iVar4 + 0x2d) & 0xf) + 3) * 4;
          }
          *(short *)(iVar4 + 6) = (short)param_3;
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1407161c,0x54e,DAT_14071618);
      }
      uVar2 = *(uint *)(iVar5 + 0x2c) & ~(1 << (param_2 & 0xff));
      *(uint *)(iVar5 + 0x2c) = uVar2;
      if (uVar2 == 0) {
        *(uint *)(iVar4 + 0x20) = *(uint *)(iVar4 + 0x20) & ~(1 << (param_1 & 0xff));
      }
      FUN_1406fa24(param_1,param_2,param_3);
    }
    else {
      *(ushort *)(iVar3 + 0x12) = uVar1;
      if ((*(int *)(iVar3 + 4) != 0) && (*(short *)(iVar3 + 0x24) != 0)) {
        uVar2 = *(uint *)(iVar4 + 0x20);
        *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar5 + 0x2c) | 1 << (param_2 & 0xff);
        *(uint *)(iVar4 + 0x20) = 1 << (param_1 & 0xff) | uVar2;
        FUN_14072a44(0);
        return 0;
      }
    }
    return 0;
  }
  return 0x43;
}

