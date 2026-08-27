/* FUN_2c6496b8 @ 0x2c6496b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6496b8(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined4 uStack_c;
  
  FUN_2c648600(_LAB_2c64978c);
  FUN_2c648600(_LAB_2c649790,0x40000);
  FUN_2c648600(_LAB_2c649794,0x40000);
  uVar1 = _LAB_2c649798;
  FUN_2c648600(_LAB_2c64979c,0x20000000);
  FUN_2c648600(_LAB_2c6497a0,0x140000);
  FUN_2c648600(_LAB_2c6497a4,uVar1);
  FUN_2c648600(_LAB_2c6497a8,0);
  FUN_2c648600(_LAB_2c6497ac,0x840000);
  FUN_2c648600(_LAB_2c6497b0,0x40000);
  FUN_2c648600(_LAB_2c6497b8,_LAB_2c6497b4);
  FUN_2c648600(_LAB_2c6497bc,0x40000);
  FUN_2c648600(_LAB_2c6497c0,uVar1);
  FUN_2c648600(_LAB_2c6497c4,0);
  FUN_2c648600(_LAB_2c6497cc,_LAB_2c6497c8);
  FUN_2c648600(_LAB_2c6497d0,0xe0000);
  FUN_2c648600(_LAB_2c6497d8,_LAB_2c6497d4);
  FUN_2c648600(_LAB_2c6497dc,0xc0000);
  FUN_2c648600(_LAB_2c6497e0);
  FUN_2c648600(_LAB_2c6497e4,0x3c000000);
  FUN_2c648600(_LAB_2c6497ec,_LAB_2c6497e8);
  FUN_2c648600(_LAB_2c6497f0);
  FUN_2c648600(_LAB_2c6497f4,0x2c000000);
  uStack_c = 0x1000000;
  iVar4 = *DAT_2c648674;
  iVar2 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c6497f8,&uStack_c,&uStack_c,iVar4,unaff_r4,unaff_lr
                      );
  if (-1 < iVar2) {
    if (iVar2 < 0x7ff) {
      if (iVar2 == 0) goto LAB_2c648630;
    }
    else {
      iVar2 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar3 = (code *)FUN_2c648328();
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(_LAB_2c648678,iVar2);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar2);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar4) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

