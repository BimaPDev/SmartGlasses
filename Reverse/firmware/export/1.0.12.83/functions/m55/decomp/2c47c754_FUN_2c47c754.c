/* FUN_2c47c754 @ 0x2c47c754 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47c754(int param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_19 [5];
  
  puVar3 = _LAB_2c47c910;
  piVar2 = _LAB_2c47c904;
  iVar6 = _LAB_2c47c8e0;
  pcVar1 = _LAB_2c47c8dc;
  if (*_LAB_2c47c8dc != '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x105,_LAB_2c47c8f0,_LAB_2c47c8ec,_LAB_2c47c8e8,_LAB_2c47c8e4,param_1);
  }
  if (param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1e6,_LAB_2c47c8f0,_LAB_2c47c8ec,_LAB_2c47c900,_LAB_2c47c8fc,0);
  }
  if (param_1 != 3) {
    if (param_1 != 1) {
      return;
    }
    if (*_LAB_2c47c904 == 0) {
      iVar6 = FUN_2c64418c(_LAB_2c47c920,0);
      *piVar2 = iVar6;
    }
    auStack_19[0] = 3;
    FUN_2c4f7174(0x9c,auStack_19,1);
    return;
  }
  if (*(short *)(_LAB_2c47c8e0 + 0x16) != 0) {
    if (*(short *)(_LAB_2c47c8e0 + 0x16) == 1) {
      iVar5 = FUN_2c46db90();
      (**(code **)(iVar5 + 0xc))
                (*(int *)(iVar6 + 0xc) +
                 ((uint)*(ushort *)(iVar6 + 0x14) - (uint)*(ushort *)(iVar6 + 0x16)) * 600 + -10,
                 *(uint *)(iVar6 + 0x10) +
                 (uint)((ulonglong)_LAB_2c47c918 * (ulonglong)*(uint *)(iVar6 + 0x10) >> 0x26) *
                 -600);
    }
    else {
      iVar5 = FUN_2c46db90();
      (**(code **)(iVar5 + 0xc))
                (((uint)*(ushort *)(iVar6 + 0x14) - (uint)*(ushort *)(iVar6 + 0x16)) * 600 + -10 +
                 *(int *)(iVar6 + 0xc));
    }
    if (*pcVar1 == '\0') {
      *(short *)(iVar6 + 0x16) = *(short *)(iVar6 + 0x16) + -1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x19b,_LAB_2c47c8f0,_LAB_2c47c8ec,_LAB_2c47c91c,_LAB_2c47c8f4,
          ((uint)*(ushort *)(iVar6 + 0x14) - (uint)*(ushort *)(iVar6 + 0x16)) * 600);
  }
  if ((code *)*_LAB_2c47c910 != (code *)0x0) {
    (*(code *)*_LAB_2c47c910)(1);
    *puVar3 = 0;
  }
  if (*pcVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x188,_LAB_2c47c8f0,_LAB_2c47c8ec,_LAB_2c47c924,_LAB_2c47c8f4);
  }
  iVar6 = *(int *)(iVar6 + 0xc);
  *_LAB_2c47c914 = 0;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(3);
  }
  if ((*_LAB_2c47cd34 != 0) && (iVar6 = FUN_2c485770(), puVar3 = DAT_2c47cbf0, iVar6 == 0)) {
    puVar7 = (undefined4 *)FUN_2c4857a8(*DAT_2c47cbf0);
    if (((*(char *)(puVar7 + 3) == '\0') && (iVar6 = FUN_2c47c54c(), iVar6 == 0)) ||
       (iVar6 = FUN_2c47c4c8(), iVar6 != 1)) {
      iVar6 = FUN_2c47a63c();
      if (iVar6 == 0) {
        FUN_2c47cb44(puVar7);
        return;
      }
    }
    else {
      iVar6 = FUN_2c47c4e0();
      puVar4 = DAT_2c47cbf4;
      if (iVar6 == 0) {
        FUN_2c47c284(*puVar7,*(undefined2 *)(puVar7 + 1),puVar7[2]);
        FUN_2c644044(*puVar4,0xffffffff);
        FUN_2c485820(*puVar3,puVar7);
        FUN_2c644080(*puVar4);
        return;
      }
    }
    return;
  }
  return;
}

