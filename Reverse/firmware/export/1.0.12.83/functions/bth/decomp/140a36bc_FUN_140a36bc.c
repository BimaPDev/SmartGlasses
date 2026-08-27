/* FUN_140a36bc @ 0x140a36bc */

undefined4 FUN_140a36bc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_140a3700;
  *DAT_140a36fc = 0;
  uVar2 = FUN_140a26ac(uVar1,0x400);
  uVar1 = DAT_140a3708;
  *DAT_140a3704 = uVar2;
  FUN_140a4524(uVar1);
  iVar3 = FUN_140e56e8(DAT_140a370c,0);
  *DAT_140a3710 = iVar3;
  if (iVar3 != 0) {
    FUN_140e5418(DAT_140a3714,0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140a371c,DAT_140a3718);
}

