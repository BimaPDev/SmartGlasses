/* FUN_100a1e1c @ 0x100a1e1c */

undefined4 FUN_100a1e1c(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_100a1e78;
  iVar3 = *DAT_100a1e78;
  *(undefined1 *)(iVar3 + 8) = 2;
  if ((*(char *)(iVar3 + 9) == '\x02') &&
     ((iVar3 = FUN_10057648(0), iVar3 != 0 || (iVar3 = FUN_10057648(1), iVar3 != 0)))) {
    *(undefined1 *)(*piVar2 + 8) = 1;
  }
  cVar1 = *(char *)(*piVar2 + 8);
  if (cVar1 == '\x02') {
    FUN_100a5b78((DAT_100a1e7c - DAT_100a1e80) * 0x20 & 0xff00U | 0xc20031,DAT_100a1e88,DAT_100a1e84
                );
  }
  else if (cVar1 == '\x01') {
    FUN_100a1db0();
  }
  return 0;
}

