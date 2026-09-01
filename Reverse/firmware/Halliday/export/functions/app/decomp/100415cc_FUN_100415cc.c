/* FUN_100415cc @ 0x100415cc */

undefined4 FUN_100415cc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_100415fc;
  iVar3 = *DAT_100415f8;
  iVar2 = (**(code **)(DAT_100415fc + 0x18))();
  if (iVar2 != 0) {
    (**(code **)(iVar1 + 0xc))();
  }
  if (*DAT_100415f8 != iVar3) {
    FUN_1013cdc0();
  }
  return 1;
}

