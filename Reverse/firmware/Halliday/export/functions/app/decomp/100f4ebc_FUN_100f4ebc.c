/* FUN_100f4ebc @ 0x100f4ebc */

void FUN_100f4ebc(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 in_r3;
  code *pcVar4;
  
  iVar1 = DAT_100f4f3c;
  FUN_10114a38();
  cVar2 = *(char *)(iVar1 + 1) + '\x01';
  *(char *)(iVar1 + 1) = cVar2;
  if ((cVar2 == '\x01') && (iVar3 = FUN_100a3564(), iVar3 != 0)) {
    if ((int)((uint)*(byte *)(iVar3 + 0x4e) << 0x1f) < 0) {
      if ((*(int *)(iVar1 + 4) != 0) &&
         (pcVar4 = *(code **)(*(int *)(iVar1 + 4) + 8), pcVar4 != (code *)0x0)) {
        (*pcVar4)();
      }
      *(byte *)(iVar3 + 0x4e) = *(byte *)(iVar3 + 0x4e) & 0xfe;
      iVar3 = FUN_100f215c();
      if (iVar3 == 0) {
        FUN_100f2354();
        goto LAB_100f4ed0;
      }
    }
    else {
      iVar3 = FUN_100f215c();
      if (iVar3 == 0) goto LAB_100f4ed0;
    }
    FUN_100f2148(1);
  }
LAB_100f4ed0:
  FUN_101150e0();
  FUN_100a5b78((DAT_100f4f44 - DAT_100f4f40) * 0x20 & 0xff00U | 0xa20031,DAT_100f4f48,
               *(undefined1 *)(iVar1 + 1),in_r3);
  return;
}

