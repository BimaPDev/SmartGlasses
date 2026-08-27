/* FUN_1408ae80 @ 0x1408ae80 */

void FUN_1408ae80(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  piVar4 = (int *)(param_1 + 0x18);
  while (*piVar4 != 0) {
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 1;
    if (iVar7 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1408b0b4,*(undefined1 *)(param_1 + 0x17));
    }
  }
  iVar1 = FUN_140759b8(0xb0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_1408b0cc);
  }
  FUN_140e5658(iVar1,0,0xb0);
  iVar8 = DAT_1408b0b8;
  *(short *)(iVar1 + 0x16) = (short)param_2;
  uVar6 = *(uint *)(iVar8 + 4);
  *(char *)(iVar1 + 0x1f) = (char)iVar7;
  *(short *)(iVar1 + 0x18) = (short)iVar7;
  *(int *)(iVar1 + 8) = param_1;
  if (uVar6 < 0xfffffff) {
    iVar2 = uVar6 + 1;
    *(int *)(iVar8 + 4) = iVar2;
    *(int *)(iVar1 + 0xc) = iVar2;
    if ((param_4 & 0xff00) == 0xc000) goto LAB_1408af40;
LAB_1408af0e:
    if (param_4 != 0) {
LAB_1408af4e:
      *(short *)(iVar1 + 0x12) = (short)param_4;
      goto LAB_1408af52;
    }
  }
  else {
    iVar8 = 1;
    while (iVar2 = FUN_1408a7dc(iVar8), iVar2 != 0) {
      iVar8 = iVar8 + 1;
      if (iVar8 == 0xfffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_1408b0c8);
      }
    }
    *(int *)(iVar1 + 0xc) = iVar8;
    if ((param_4 & 0xff00) != 0xc000) goto LAB_1408af0e;
LAB_1408af40:
    if (param_3 == 4) {
      param_4 = param_4 & 0xff | 0x2000;
      goto LAB_1408af4e;
    }
  }
  switch(param_2) {
  case 1:
    if (param_3 != 3) {
      if (param_3 != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_1408b0d8,DAT_1408b0d0,1,param_3);
      }
      *(undefined2 *)(iVar1 + 0x12) = 0x2000;
      goto LAB_1408af52;
    }
    uVar5 = 0x1040;
    break;
  default:
    if ((param_3 == 9) || (param_2 == 0x1011)) {
      uVar5 = 0xb140;
    }
    else if ((param_3 == 10) || (param_2 == 0x1013)) {
      uVar5 = 0xb240;
    }
    else {
      if ((param_3 != 0xb) && (param_2 != 0x1015)) {
        *(short *)(iVar1 + 0x12) = (short)iVar7 + 0x40;
        goto LAB_1408af52;
      }
      uVar5 = 0xb340;
    }
    break;
  case 3:
    uVar5 = 0x3040;
    break;
  case 0xf:
    uVar5 = 0x4040;
    break;
  case 0x11:
    uVar5 = 0x5040;
    break;
  case 0x13:
    uVar5 = 0x5140;
    break;
  case 0x15:
    uVar5 = 0x6040;
    break;
  case 0x17:
    uVar5 = 0x7040;
    break;
  case 0x19:
    if (param_3 == 1) {
      uVar5 = 0x9040;
    }
    else {
      if (param_3 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_1408b0d4,DAT_1408b0d0,0x19,param_3);
      }
      uVar5 = 0xa040;
    }
    break;
  case 0x1b:
    uVar5 = 0x8040;
    break;
  case 0x1f:
    uVar5 = 0xaa40;
  }
  *(undefined2 *)(iVar1 + 0x12) = uVar5;
LAB_1408af52:
  *piVar4 = iVar1;
  cVar3 = *(char *)(param_1 + 0x17) + '\x01';
  *(char *)(param_1 + 0x17) = cVar3;
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x47,DAT_1408b0bc,*(undefined1 *)(param_1 + 0x11),param_1,iVar1,
               *(undefined4 *)(iVar1 + 0xc),cVar3,*(undefined2 *)(iVar1 + 0x12),
               (int)*(short *)(iVar1 + 0x18));
}

