/* FUN_2c629aa4 @ 0x2c629aa4 */

int FUN_2c629aa4(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_2c;
  
  iVar7 = *(int *)(param_1 + 0x10);
  local_2c = *DAT_2c629c14;
  if (param_3 == 9) {
    iVar8 = 1;
    param_3 = 0x20;
LAB_2c629ae2:
    iVar2 = FUN_2c62992c(iVar7,param_3);
    if (iVar2 != 0) {
      if (((*(int *)(iVar7 + 0xc) == 0) || (param_4 == 0)) ||
         (iVar3 = FUN_2c62992c(*(undefined4 *)(param_1 + 0x10),param_4), iVar3 == 0)) {
        iVar3 = 0;
        bVar1 = false;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x10);
        if ((*(byte *)(iVar4 + 0x13) & 0x20) == 0) {
          piVar6 = *(int **)(iVar4 + 0xc);
          if ((*(byte *)((int)piVar6 + 0xb) & 0xc0) == 0) {
            iVar4 = *piVar6;
            local_30 = CONCAT22(local_30._2_2_,(short)iVar2 + (short)(iVar3 << 8));
            iVar3 = FUN_2c62e528(&local_30,iVar4,piVar6[2] & 0x3fffffff,2,DAT_2c629c18);
            if (iVar3 != 0) {
              iVar3 = (int)*(char *)(piVar6[1] + (iVar3 - iVar4 >> 1));
              goto LAB_2c629b88;
            }
          }
          else if ((*(byte *)((int)piVar6 + 0xb) & 0xc0) == 0x40) {
            local_30 = iVar2 + iVar3 * 0x10000;
            iVar4 = *piVar6;
            iVar3 = FUN_2c62e528(&local_30,iVar4,piVar6[2] & 0x3fffffff,4,DAT_2c629c1c);
            if (iVar3 != 0) {
              iVar3 = (int)*(char *)(piVar6[1] + (iVar3 - iVar4 >> 2));
              goto LAB_2c629b88;
            }
          }
LAB_2c629ba6:
          iVar3 = 0;
        }
        else {
          piVar6 = *(int **)(iVar4 + 0xc);
          if ((*(byte *)(piVar6[1] + iVar2) == 0) || (*(byte *)(piVar6[2] + iVar3) == 0))
          goto LAB_2c629ba6;
          iVar3 = (int)*(char *)((uint)*(byte *)((int)piVar6 + 0xd) *
                                 (*(byte *)(piVar6[1] + iVar2) - 1) +
                                 *piVar6 + (uint)*(byte *)(piVar6[2] + iVar3) + -1);
        }
LAB_2c629b88:
        bVar1 = param_4 == 0x3a;
      }
      iVar2 = *(int *)(iVar7 + 4) + iVar2 * 0x10;
      iVar4 = *(int *)(iVar2 + 4);
      if (iVar8 != 0) {
        iVar4 = iVar4 << 1;
      }
      sVar5 = (short)((uint)(((int)(iVar3 * (uint)*(ushort *)(iVar7 + 0x10)) >> 4) + 8 + iVar4) >> 4
                     );
      if (bVar1) {
        sVar5 = sVar5 + (ushort)*(byte *)(param_1 + 0x1c);
      }
      *(short *)(param_2 + 4) = sVar5;
      *(undefined2 *)(param_2 + 8) = *(undefined2 *)(iVar2 + 10);
      sVar5 = *(short *)(iVar2 + 8);
      *(short *)(param_2 + 6) = sVar5;
      *(undefined2 *)(param_2 + 10) = *(undefined2 *)(iVar2 + 0xc);
      *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(iVar2 + 0xe);
      *(byte *)(param_2 + 0xe) =
           *(byte *)(param_2 + 0xe) & 0xe0 | (byte)(((uint)*(byte *)(iVar7 + 0x13) << 0x1b) >> 0x1c)
      ;
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      else {
        *(short *)(param_2 + 6) = sVar5 << 1;
      }
      goto LAB_2c629ac6;
    }
  }
  else if (param_3 != 0) {
    iVar8 = 0;
    goto LAB_2c629ae2;
  }
  iVar8 = 0;
LAB_2c629ac6:
  if (*DAT_2c629c14 == local_2c) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

