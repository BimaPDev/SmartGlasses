/* FUN_100a4254 @ 0x100a4254 */

undefined4 FUN_100a4254(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_100a4280;
  if (*DAT_100a427c == 0) {
    *DAT_100a427c = DAT_100a4280;
    FUN_1011ea48(iVar1,0,0x18);
    FUN_100a42c0();
    FUN_100a1c48(DAT_100a4284);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffef;
  }
  return uVar2;
}

