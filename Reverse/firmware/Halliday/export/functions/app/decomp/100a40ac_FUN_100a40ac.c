/* FUN_100a40ac @ 0x100a40ac */

undefined4 FUN_100a40ac(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  piVar1 = DAT_100a4118;
  iVar2 = DAT_100a4114;
  *DAT_100a4118 = DAT_100a4114;
  FUN_1011ea48(iVar2,0,0x90);
  iVar2 = FUN_10112e84(DAT_100a411c);
  if (iVar2 == 0) {
    FUN_100a5b78((DAT_100a4124 - DAT_100a4120) * 0x20 & 0xff00U | 0xba0011,DAT_100a412c,DAT_100a4128
                );
    uVar3 = 0xffffffed;
  }
  else {
    pcVar4 = *(code **)(*(int *)(iVar2 + 8) + 0xc);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar2,DAT_100a4130);
    }
    thunk_FUN_101146e4(*piVar1,DAT_100a4134);
    thunk_FUN_101146e4(*piVar1 + 0x30,DAT_100a4138);
    FUN_10061c18(*piVar1 + 0x68,DAT_100a413c,0);
    uVar3 = 0;
  }
  return uVar3;
}

