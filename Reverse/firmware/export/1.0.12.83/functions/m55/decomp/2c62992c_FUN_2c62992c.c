/* FUN_2c62992c @ 0x2c62992c */

void FUN_2c62992c(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined2 local_1e;
  uint local_1c;
  
  piVar4 = *(int **)(param_1 + 0x14);
  local_1c = *DAT_2c629a34;
  iVar3 = param_2;
  if (piVar4 == (int *)0x0) {
    uVar5 = *(ushort *)(param_1 + 0x12) & 0x1ff;
    if ((*(ushort *)(param_1 + 0x12) & 0x1ff) == 0) goto LAB_2c629980;
LAB_2c629952:
    iVar6 = 0;
    uVar7 = 0;
    iVar3 = *(int *)(param_1 + 8);
    do {
      uVar2 = param_2 - *(int *)(*(int *)(param_1 + 8) + iVar6);
      if (uVar2 < *(ushort *)(iVar3 + 4)) {
        cVar1 = *(char *)(iVar3 + 0x12);
        if (cVar1 == '\x02') {
          uVar5 = uVar2 + *(ushort *)(iVar3 + 6);
        }
        else if (cVar1 == '\0') {
          uVar5 = (uint)*(ushort *)(iVar3 + 6) + (uint)*(byte *)(*(int *)(iVar3 + 0xc) + uVar2);
        }
        else {
          if (cVar1 == '\x03') {
            local_1e = (short)uVar2;
            uVar8 = FUN_2c62e528(&local_1e,*(undefined4 *)(iVar3 + 8),*(undefined2 *)(iVar3 + 0x10),
                                 2,DAT_2c629a38);
            iVar3 = (int)((ulonglong)uVar8 >> 0x20);
            uVar5 = 0;
            if ((int)uVar8 != 0) {
              iVar6 = iVar6 + *(int *)(param_1 + 8);
              uVar5 = (uint)*(ushort *)(iVar6 + 6) + ((int)uVar8 - *(int *)(iVar6 + 8) >> 1);
            }
          }
          else {
            if (cVar1 != '\x01') {
              uVar5 = 0;
              goto LAB_2c629978;
            }
            local_1e = (short)uVar2;
            uVar8 = FUN_2c62e528(&local_1e,*(undefined4 *)(iVar3 + 8),*(undefined2 *)(iVar3 + 0x10),
                                 2,DAT_2c629a38);
            iVar3 = (int)((ulonglong)uVar8 >> 0x20);
            uVar5 = 0;
            if ((int)uVar8 != 0) {
              iVar6 = iVar6 + *(int *)(param_1 + 8);
              uVar5 = (uint)*(ushort *)(*(int *)(iVar6 + 0xc) + ((int)uVar8 - *(int *)(iVar6 + 8)))
                      + (uint)*(ushort *)(iVar6 + 6);
            }
          }
          piVar4 = *(int **)(param_1 + 0x14);
        }
LAB_2c629978:
        if (piVar4 != (int *)0x0) {
          *piVar4 = param_2;
          *(uint *)(*(int *)(param_1 + 0x14) + 4) = uVar5;
        }
        goto LAB_2c629980;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0x14;
      iVar3 = iVar3 + 0x14;
    } while (uVar7 < uVar5);
    if (piVar4 == (int *)0x0) {
      uVar5 = 0;
      goto LAB_2c629980;
    }
  }
  else {
    if (*piVar4 == param_2) {
      uVar5 = piVar4[1];
      goto LAB_2c629980;
    }
    uVar5 = *(ushort *)(param_1 + 0x12) & 0x1ff;
    if ((*(ushort *)(param_1 + 0x12) & 0x1ff) != 0) goto LAB_2c629952;
  }
  uVar5 = 0;
  *piVar4 = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
LAB_2c629980:
  if ((*DAT_2c629a34 ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar5,iVar3,*DAT_2c629a34 ^ local_1c,0);
  }
  return;
}

