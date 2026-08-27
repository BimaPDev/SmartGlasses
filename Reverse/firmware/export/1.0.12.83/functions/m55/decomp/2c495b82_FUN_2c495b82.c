/* FUN_2c495b82 @ 0x2c495b82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c495b82(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
  char in_ZR;
  
  if (in_ZR == '\0') {
    if (param_1 == 3) {
      pcVar7 = *(char **)(param_2 + 4);
      iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495d80);
      if (iVar3 == 0) {
        pcVar7 = *(char **)(param_2 + 8);
        cVar1 = *pcVar7;
        if (((cVar1 == '0') && (pcVar7[1] == '\0')) ||
           (iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495da4), iVar3 == 0)) {
          uVar8 = _LAB_2c495da4;
          *_LAB_2c495da8 = 0;
        }
        else if (((cVar1 == '1') && (pcVar7[1] == '\0')) ||
                (iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495dac), iVar3 == 0)) {
          uVar8 = _LAB_2c495dac;
          *_LAB_2c495da8 = 1;
        }
        else if (((cVar1 == '2') && (pcVar7[1] == '\0')) ||
                (iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495dc4), iVar3 == 0)) {
          uVar8 = _LAB_2c495dc4;
          *_LAB_2c495da8 = 2;
        }
        else {
          if (((cVar1 != '3') || (pcVar7[1] != '\0')) &&
             (iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495dc8), iVar3 != 0)) {
            iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495dcc);
            if ((iVar3 == 0) || (iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495dd0), iVar3 == 0)) {
              uVar8 = _LAB_2c495dd0;
              *_LAB_2c495da8 = 4;
              goto LAB_2c495c88;
            }
            iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495dd4);
            if ((iVar3 == 0) || (iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495dd8), iVar3 == 0)) {
              uVar8 = _LAB_2c495dd8;
              *_LAB_2c495da8 = 5;
              goto LAB_2c495c88;
            }
          }
          uVar8 = _LAB_2c495dc8;
          *_LAB_2c495da8 = 3;
        }
LAB_2c495c88:
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x245,_LAB_2c495d94,_LAB_2c495d90,_LAB_2c495db4,_LAB_2c495d80,uVar8);
      }
      if (((*pcVar7 == 'l') && (pcVar7[1] == 'v')) && (pcVar7[2] == '\0')) {
        bVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
        if (0xf < bVar2) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x527,_LAB_2c495b68,_LAB_2c495b64,_LAB_2c495b78);
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x52b,_LAB_2c495b68,_LAB_2c495b64,_LAB_2c495b60);
      }
      iVar3 = FUN_2c66b624(pcVar7,_LAB_2c495d84);
      if (iVar3 == 0) {
        bVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
        if (0x14 < bVar2) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x426,_LAB_2c495d94,_LAB_2c495d90,_LAB_2c495dc0,0x14,bVar2);
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x42a,_LAB_2c495d94,_LAB_2c495d90,_LAB_2c495db8,bVar2);
      }
      param_1 = FUN_2c66b624(pcVar7,_LAB_2c495d88);
      if (param_1 == 0) {
        cVar1 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x432,_LAB_2c495d94,_LAB_2c495d90,_LAB_2c495d8c,cVar1 != '\0');
      }
    }
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 4);
    iVar4 = FUN_2c66c540(uVar8,_LAB_2c495d98,4);
    iVar3 = _LAB_2c495da0;
    if (iVar4 == 0) {
      iVar4 = *DAT_2c648674;
      iVar3 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c495db0,&stack0xfffffff4,&stack0xfffffff4,iVar4
                           ,unaff_r4,unaff_lr);
      if (-1 < iVar3) {
        if (iVar3 < 0x7ff) {
          if (iVar3 == 0) goto LAB_2c648630;
        }
        else {
          iVar3 = 0x7ff;
        }
        if (*DAT_2c64867c == '\0') {
          UNRECOVERED_JUMPTABLE = (code *)FUN_2c648328();
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
            (*UNRECOVERED_JUMPTABLE)(_LAB_2c648678,iVar3);
          }
        }
        else {
          FUN_2c673a28(_LAB_2c648678,iVar3);
        }
      }
LAB_2c648630:
      if (*DAT_2c648674 != iVar4) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return 0;
    }
    iVar4 = 0;
    uVar6 = _LAB_2c495d9c;
    while (iVar5 = FUN_2c66b624(uVar8,uVar6), iVar5 != 0) {
      iVar4 = iVar4 + 1;
      if (iVar4 == 0x60) {
        return iVar5;
      }
      uVar6 = *(undefined4 *)(iVar3 + iVar4 * 8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_LAB_2c495da0 + iVar4 * 8 + 4);
    param_1 = 0;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c495c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (*UNRECOVERED_JUMPTABLE)();
      return iVar3;
    }
  }
  return param_1;
}

