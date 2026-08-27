/* FUN_2c629c2c @ 0x2c629c2c */

void FUN_2c629c2c(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined2 local_16;
  uint local_14;
  
  local_14 = *DAT_2c629cf8;
  uVar2 = *(ushort *)(param_1 + 0x12);
  uVar3 = uVar2 & 0x1ff;
  if ((uVar2 & 0x1ff) != 0) {
    iVar5 = 0;
    iVar4 = *(int *)(param_1 + 8);
    do {
      uVar3 = param_2 - *(int *)(*(int *)(param_1 + 8) + iVar5);
      if (uVar3 < *(ushort *)(iVar4 + 4)) {
        cVar1 = *(char *)(iVar4 + 0x12);
        if (cVar1 == '\x02') {
          uVar3 = *(ushort *)(iVar4 + 6) + uVar3;
          goto LAB_2c629c70;
        }
        if (cVar1 == '\0') {
          param_2 = *(int *)(iVar4 + 0xc);
          uVar3 = (uint)*(byte *)(param_2 + uVar3) + (uint)*(ushort *)(iVar4 + 6);
          goto LAB_2c629c70;
        }
        if (cVar1 == '\x03') {
          local_16 = (short)uVar3;
          uVar6 = FUN_2c62e528(&local_16,*(undefined4 *)(iVar4 + 8),*(undefined2 *)(iVar4 + 0x10),2,
                               DAT_2c629cfc);
          param_2 = (int)((ulonglong)uVar6 >> 0x20);
          uVar3 = 0;
          if ((int)uVar6 != 0) {
            iVar5 = iVar5 + *(int *)(param_1 + 8);
            uVar3 = (uint)*(ushort *)(iVar5 + 6) + ((int)uVar6 - *(int *)(iVar5 + 8) >> 1);
          }
          goto LAB_2c629c70;
        }
        if (cVar1 == '\x01') {
          local_16 = (short)uVar3;
          uVar6 = FUN_2c62e528(&local_16,*(undefined4 *)(iVar4 + 8),*(undefined2 *)(iVar4 + 0x10),2,
                               DAT_2c629cfc);
          param_2 = (int)((ulonglong)uVar6 >> 0x20);
          uVar3 = 0;
          if ((int)uVar6 != 0) {
            iVar5 = iVar5 + *(int *)(param_1 + 8);
            param_2 = *(int *)(iVar5 + 8);
            uVar3 = (uint)*(ushort *)(*(int *)(iVar5 + 0xc) + ((int)uVar6 - param_2)) +
                    (uint)*(ushort *)(iVar5 + 6);
          }
          goto LAB_2c629c70;
        }
        break;
      }
      iVar5 = iVar5 + 0x14;
      iVar4 = iVar4 + 0x14;
    } while (iVar5 != (short)(ushort)(((uint)uVar2 << 0x17) >> 0x17) * 0x14);
    uVar3 = 0;
  }
LAB_2c629c70:
  if ((*DAT_2c629cf8 ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar3,param_2,*DAT_2c629cf8 ^ local_14,0);
  }
  return;
}

