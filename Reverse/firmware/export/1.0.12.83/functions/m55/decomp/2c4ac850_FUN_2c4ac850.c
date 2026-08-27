/* FUN_2c4ac850 @ 0x2c4ac850 */

int FUN_2c4ac850(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_2c4acb70;
  if (param_4 == 0) {
    if (param_2 == 0) {
      if (param_3 << 0x1f < 0) {
        FUN_2c4ac2b4(param_1,0,0);
      }
    }
    else if (param_3 << 0x1e < 0) {
      FUN_2c4ac410(param_1,0);
      FUN_2c4ac2b4(param_1,1,0);
    }
    FUN_2c4ab4ec(param_1,0);
    FUN_2c4ac4dc(param_1,*(undefined4 *)(param_1 + 0x2dc),*(undefined4 *)(param_1 + 0x2e0),
                 *(undefined4 *)(param_1 + 0x2e4),*(undefined4 *)(param_1 + 0x2e8));
    FUN_2c4ab4ec(param_1,1);
    FUN_2c4ab1b0(param_1);
    iVar2 = 0;
    *(undefined1 *)(param_1 + 0x2d8) = 0;
  }
  else {
    iVar2 = FUN_2c4ab450();
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1cd,DAT_2c4acb80,DAT_2c4acb7c,DAT_2c4acb8c,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4acb74);
    }
    iVar2 = FUN_2c4ab578(param_1);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1d3,DAT_2c4acb80,DAT_2c4acb7c,DAT_2c4acb78,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4acb74);
    }
    iVar2 = FUN_2c4aab18(param_1);
    if (iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1d9,DAT_2c4acc24,DAT_2c4acc20,DAT_2c4acc34,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4acc30);
    }
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    FUN_2c4ab4ec(param_1,0);
    iVar2 = (**(code **)(param_1 + 0x348))
                      (param_1,*(undefined2 *)(param_1 + 0x20c),(undefined4 *)(param_1 + 0x2dc),
                       *(undefined1 *)(param_1 + 0x210));
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1eb,DAT_2c4acb80,DAT_2c4acb7c,DAT_2c4acb9c,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4acb98,*(undefined4 *)(param_1 + 0x20c));
    }
    iVar2 = (**(code **)(param_1 + 0x348))
                      (param_1,*(undefined2 *)(param_1 + 0x214),param_1 + 0x2e0,
                       *(undefined1 *)(param_1 + 0x218));
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1f2,DAT_2c4acb80,DAT_2c4acb7c,DAT_2c4acb9c,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4acb98,*(undefined4 *)(param_1 + 0x214));
    }
    iVar2 = (**(code **)(param_1 + 0x348))
                      (param_1,*(undefined2 *)(param_1 + 0x21c),param_1 + 0x2e4,
                       *(undefined1 *)(param_1 + 0x220));
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1f9,DAT_2c4acb80,DAT_2c4acb7c,DAT_2c4acb9c,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4acb98,*(undefined4 *)(param_1 + 0x21c));
    }
    iVar2 = (**(code **)(param_1 + 0x348))
                      (param_1,*(undefined2 *)(param_1 + 0x224),param_1 + 0x2e8,
                       *(undefined1 *)(param_1 + 0x228));
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x200,DAT_2c4acc24,DAT_2c4acc20,DAT_2c4acc1c,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4acc18,*(undefined4 *)(param_1 + 0x224));
    }
    iVar2 = FUN_2c4ac4dc(param_1,0,0,0xffffffff,1);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x27f,DAT_2c4acb80,DAT_2c4acb7c,DAT_2c4acba8,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4acba0);
    }
    FUN_2c4ab4ec(param_1,1);
    if (param_2 == 0) {
      if ((param_3 << 0x1f < 0) && (iVar2 = FUN_2c4ac2b4(param_1,0,1), iVar2 < 0)) {
        FUN_2c4ab4ec(param_1,0);
        FUN_2c4ac4dc(param_1,*(undefined4 *)(param_1 + 0x2dc),*(undefined4 *)(param_1 + 0x2e0),
                     *(undefined4 *)(param_1 + 0x2e4),*(undefined4 *)(param_1 + 0x2e8));
        FUN_2c4ab4ec(param_1,1);
        *(undefined1 *)(param_1 + 0x2d8) = 0;
        goto LAB_2c4ac8a4;
      }
    }
    else if (param_3 << 0x1e < 0) {
      iVar2 = FUN_2c4ac2b4(param_1,1);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x2f6,DAT_2c4acc24,DAT_2c4acc20,DAT_2c4acc2c,*(undefined1 *)(param_1 + 0xa0),
              DAT_2c4acc28,iVar2);
      }
      FUN_2c6444fc(*(undefined4 *)(param_1 + 0x318));
      iVar2 = FUN_2c4ac410(param_1,1);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x2fd,DAT_2c4acb80,DAT_2c4acb7c,DAT_2c4acb94,*(undefined1 *)(param_1 + 0xa0),
              DAT_2c4acb90,iVar2);
      }
    }
    iVar2 = 0;
  }
LAB_2c4ac8a4:
  if (*DAT_2c4acb70 == iVar1) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

