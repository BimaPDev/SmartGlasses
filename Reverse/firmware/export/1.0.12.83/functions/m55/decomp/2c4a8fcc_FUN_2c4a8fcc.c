/* FUN_2c4a8fcc @ 0x2c4a8fcc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4a8fcc(byte *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  short sStack_26;
  int iStack_24;
  
  iStack_24 = *DAT_2c4a926c;
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x3de,DAT_2c4a927c,DAT_2c4a9278,_LAB_2c4a92b4,DAT_2c4a9270);
  }
  bVar1 = *param_1;
  if (0xf < bVar1) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x367,DAT_2c4a927c,DAT_2c4a9278,_LAB_2c4a92b0,_LAB_2c4a9288,bVar1);
  }
  if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x18) == 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x36e,DAT_2c4a927c,DAT_2c4a9278,_LAB_2c4a92ac,bVar1,_LAB_2c4a9288);
  }
  iVar3 = FUN_2c4aa790(bVar1,*(undefined4 *)(param_1 + 0x10));
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x374,DAT_2c4a927c,DAT_2c4a9278,_LAB_2c4a928c,*param_1,_LAB_2c4a9288);
  }
  piVar4 = (int *)FUN_2c4aa4ec(0x24);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x37f,DAT_2c4a927c,DAT_2c4a9278,_LAB_2c4a929c,*param_1,_LAB_2c4a9298);
  }
  piVar4[2] = (int)param_1;
  *piVar4 = 0;
  *(byte *)(piVar4 + 3) = *param_1;
  *(byte *)((int)piVar4 + 0xd) = param_1[1];
  piVar4[6] = *(int *)(param_1 + 0x14);
  piVar4[7] = *(int *)(param_1 + 0x18);
  *(byte *)((int)piVar4 + 0xe) = param_1[2];
  pcVar6 = *(code **)(param_1 + 0x1c);
  piVar4[4] = 1;
  *(undefined1 *)((int)piVar4 + 0x15) = 0;
  piVar4[8] = (int)pcVar6;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)();
    FUN_2c6444fc(1);
    (*(code *)piVar4[8])(1);
    FUN_2c6444fc(2);
  }
  iVar3 = 5;
  sStack_26 = 0;
  while( true ) {
    iVar5 = FUN_2c4a8638(piVar4,0,&sStack_26);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x3a5,DAT_2c4a927c,DAT_2c4a9278,_LAB_2c4a9294,(char)piVar4[3],_LAB_2c4a9290,0);
    }
    if (sStack_26 == 0x2049) break;
    FUN_2c6444fc(5);
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x3f4,DAT_2c4a927c,DAT_2c4a9278,DAT_2c4a9274,*param_1,DAT_2c4a9270,0xffffffea);
    }
  }
  iVar3 = piVar4[2];
  piVar4[1] = 0x2049;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    iVar5 = -1;
  }
  else {
    puVar7 = (undefined4 *)(iVar3 + 0x1c);
    iVar8 = 0;
    do {
      puVar7 = puVar7 + 1;
      if ((code *)*puVar7 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x3c4,DAT_2c4a927c,DAT_2c4a9278,_LAB_2c4a92a8,(char)piVar4[3],_LAB_2c4a92a4,iVar8);
      }
      iVar5 = (*(code *)*puVar7)(piVar4);
      if (-1 < iVar5) {
        if (iVar5 == 0) {
          *(undefined4 *)*piVar4 = 0;
          *(undefined1 *)(*piVar4 + 0xb8) = 1;
          if (param_1[3] == 0) {
            *(undefined1 *)(*piVar4 + 0xac) = 0;
            iVar3 = *(int *)(param_1 + 4);
            if (iVar3 == 0) goto LAB_2c4a9142;
LAB_2c4a9104:
            *(int *)(*piVar4 + 0x308) = iVar3;
            iVar3 = *(int *)(param_1 + 8);
            if (iVar3 == 0) goto LAB_2c4a9152;
LAB_2c4a910e:
            *(int *)(*piVar4 + 0x30c) = iVar3;
          }
          else {
            *(byte *)(*piVar4 + 0xac) = param_1[3];
            iVar3 = *(int *)(param_1 + 4);
            if (iVar3 != 0) goto LAB_2c4a9104;
LAB_2c4a9142:
            *(undefined4 *)(*piVar4 + 0x308) = 1000;
            iVar3 = *(int *)(param_1 + 8);
            if (iVar3 != 0) goto LAB_2c4a910e;
LAB_2c4a9152:
            *(undefined4 *)(*piVar4 + 0x30c) = 40000;
          }
          *(byte *)(*piVar4 + 0x305) = param_1[0xc];
          *(undefined1 *)(*piVar4 + 0x304) = 0;
          piVar2 = _LAB_2c4a9280;
          *(int **)(_LAB_2c4a9284 + (uint)*param_1 * 4) = piVar4;
          *piVar2 = *piVar2 + 1;
          goto LAB_2c4a90a6;
        }
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)*(byte *)(iVar3 + 0xd));
  }
  FUN_2c4aa540(piVar4);
LAB_2c4a90a6:
  if (*DAT_2c4a926c != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar5;
}

