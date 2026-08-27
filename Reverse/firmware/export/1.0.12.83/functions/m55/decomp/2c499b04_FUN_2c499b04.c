/* FUN_2c499b04 @ 0x2c499b04 */

undefined4 FUN_2c499b04(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  
  puVar3 = DAT_2c499db4;
  iVar1 = DAT_2c499d8c;
  if ((0x1bc5 < param_1) && (param_1 != 0x1c03)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x619,DAT_2c499da0,DAT_2c499d9c,DAT_2c499dac);
  }
  iVar9 = ((int)((int)((ulonglong)((longlong)DAT_2c499d84 * (longlong)(int)param_1) >> 0x20) +
                param_1) >> 6) - ((int)param_1 >> 0x1f);
  if (iVar9 == 0) {
    return 0xffffffff;
  }
  if (*DAT_2c499d88 == 1) {
    return 0;
  }
  iVar6 = *(int *)(DAT_2c499d8c + 0x24);
  *DAT_2c499db4 = 1;
  pcVar4 = DAT_2c499db8;
  puVar10 = DAT_2c499d94;
  if (iVar6 != 0) {
    thunk_FUN_2c4975bc(0xa9);
    FUN_2c4974f8(10);
    if (iVar9 == 100) {
      FUN_2c497fb8(0x9fe);
    }
    else {
      FUN_2c497fb8(iVar9 * 0x19 & 0xffff);
    }
    puVar10 = DAT_2c499d94;
    if (*DAT_2c499d94 != 0) {
      FUN_2c497f38(0,*DAT_2c499d94 & 0xff);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x635,DAT_2c499da0,DAT_2c499d9c,DAT_2c499da4,*puVar10);
    }
    if (DAT_2c499d94[1] != 0) {
      FUN_2c497f38(1,DAT_2c499d94[1] & 0xff);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x63a,DAT_2c499da0,DAT_2c499d9c,DAT_2c499da8,puVar10[1]);
    }
    FUN_2c4974f8(10);
    thunk_FUN_2c4975bc(0xa3);
    thunk_FUN_2c4975bc(0x97);
    FUN_2c497510(1);
    uVar5 = *(undefined4 *)(iVar1 + 0x2c);
    uVar8 = *(undefined4 *)(iVar1 + 0x24);
    uVar7 = *(undefined4 *)(iVar1 + 0x28);
    goto LAB_2c499bb0;
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    if (*(int *)(iVar1 + 0x2c) == 0) {
      uVar5 = 0;
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      FUN_2c4998cc(param_1);
      uVar5 = *(undefined4 *)(iVar1 + 0x2c);
      uVar8 = *(undefined4 *)(iVar1 + 0x24);
      uVar7 = *(undefined4 *)(iVar1 + 0x28);
    }
    goto LAB_2c499bb0;
  }
  if ((int)param_1 < 0x2c6) {
    *DAT_2c499d90 = 1;
    thunk_FUN_2c4975bc(0xa9);
    puVar10 = DAT_2c499d94;
    if ((*pcVar4 == '\0') || (1999 < *DAT_2c499d94)) {
      FUN_2c497f70(0,2000);
    }
    else {
      FUN_2c497f70(0,*DAT_2c499d94 & 0xffff);
    }
    if ((pcVar4[1] == '\0') || (1999 < puVar10[1])) {
      FUN_2c497f70(1,2000);
    }
    else {
      FUN_2c497f70(1,puVar10[1] & 0xffff);
    }
LAB_2c499c92:
    thunk_FUN_2c4975bc(0xa3);
    thunk_FUN_2c4975bc(0x97);
    FUN_2c497510(1);
  }
  else {
    if ((*DAT_2c499d90 != 2) && (param_1 != 0x1c03)) {
      *DAT_2c499d90 = 2;
      thunk_FUN_2c4975bc(0xa9);
      puVar10 = DAT_2c499d94;
      if (*pcVar4 == '\0') {
        FUN_2c497f70(0,0x1bc5);
      }
      else {
        FUN_2c497f70(0,(short)*DAT_2c499d94);
      }
      if (pcVar4[1] == '\0') {
        FUN_2c497f70(1,0x1bc5);
      }
      else {
        FUN_2c497f70(1,(short)puVar10[1]);
      }
      goto LAB_2c499c92;
    }
    if (param_1 == 0x1c03) {
      *DAT_2c499d90 = 3;
      thunk_FUN_2c4975bc(0xa9);
      FUN_2c497fb8(0x1bc5);
      thunk_FUN_2c4975bc(0xa3);
      thunk_FUN_2c4975bc(0x97);
      FUN_2c497510(1);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x676,DAT_2c499da0,DAT_2c499d9c,DAT_2c499db0);
    }
  }
  FUN_2c4996ec(param_1);
  uVar5 = *(undefined4 *)(iVar1 + 0x2c);
  uVar8 = *(undefined4 *)(iVar1 + 0x24);
  uVar7 = *(undefined4 *)(iVar1 + 0x28);
LAB_2c499bb0:
  uVar2 = DAT_2c499d98;
  *(uint *)(iVar1 + 0x1c) = param_1;
  *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x682,DAT_2c499da0,DAT_2c499d9c,uVar2,uVar8,uVar7,uVar5,*puVar10,puVar10[1],iVar9);
}

