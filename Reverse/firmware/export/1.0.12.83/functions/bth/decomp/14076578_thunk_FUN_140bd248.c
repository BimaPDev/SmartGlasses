/* thunk_FUN_140bd248 @ 0x14076578 */

undefined4 thunk_FUN_140bd248(byte *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int aiStack_28 [3];
  int iStack_1c;
  
  iStack_1c = *DAT_140bd44c;
  if (*DAT_140bd450 == 0) {
    uVar7 = (uint)*param_1;
    if (uVar7 == 1) {
      if (((code *)*DAT_140bd468 != (code *)0x0) && (iVar6 = (*(code *)*DAT_140bd468)(), iVar6 != 0)
         ) goto LAB_140bd32c;
      if (*DAT_140bd454 != '\0') {
LAB_140bd2e6:
        iVar6 = FUN_140bcfc8(param_1,param_2);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x40,DAT_140bd48c);
        }
      }
      if ((((*DAT_140bd46c != '\0') && (*DAT_140bd470 != '\0')) && (param_1[1] == 0x35)) &&
         (param_1[2] == 0xc)) {
        if ((char)param_1[5] < '\0') {
          *DAT_140bd49c = *DAT_140bd49c + (uint)param_1[7];
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_140bd4a0);
        }
        *DAT_140bd474 = *DAT_140bd474 + (uint)param_1[7];
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_140bd478);
      }
    }
    else if (*DAT_140bd454 == '\0') {
      if ((*DAT_140bd46c != '\0') && (uVar7 == 2)) {
LAB_140bd350:
        if ((char)param_1[1] < '\0') {
          iVar6 = *DAT_140bd494;
          cVar1 = *DAT_140bd470;
          *DAT_140bd494 = iVar6 + 1;
          if (cVar1 != '\0') {
            uVar4 = FUN_140337dc();
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,DAT_140bd498,iVar6 + 1,uVar4);
          }
        }
        else {
          cVar1 = *DAT_140bd470;
          *DAT_140bd47c = *DAT_140bd47c + 1;
          if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_140bd480);
          }
        }
      }
    }
    else {
      if (uVar7 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_140bd488,param_2);
      }
      if (uVar7 == 5) {
        if (*DAT_140bd458 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x40,DAT_140bd48c);
        }
      }
      else if (uVar7 - 1 < 2) {
        if (uVar7 != 2) goto LAB_140bd2e6;
        iVar6 = FUN_140bcfc8();
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x40,DAT_140bd48c);
        }
        if (*DAT_140bd46c != '\0') goto LAB_140bd350;
      }
    }
    puVar2 = DAT_140bd45c;
    FUN_140e5148(*DAT_140bd45c,0xffffffff);
    uVar4 = FUN_140e5998();
    puVar3 = DAT_140bd464;
    cVar1 = *DAT_140bd460;
    *DAT_140bd464 = uVar4;
    if (cVar1 != '\0') {
      FUN_14028ee8(1);
      uVar5 = FUN_140e5848();
      uVar4 = *puVar3;
      *DAT_140bd484 = uVar5;
    }
    FUN_140e5098(uVar4,1);
    uVar4 = FUN_14026af8(0,0,param_1,param_2);
    FUN_140e53d8(aiStack_28,1,5000);
    if (aiStack_28[0] == 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140bd4a8,DAT_140bd4a4);
    }
    FUN_140e52d8(*puVar2);
  }
  else {
LAB_140bd32c:
    uVar4 = 0;
  }
  if (*DAT_140bd44c != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return uVar4;
}

