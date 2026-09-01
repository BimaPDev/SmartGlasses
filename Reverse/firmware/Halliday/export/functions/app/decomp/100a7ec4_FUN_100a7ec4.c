/* FUN_100a7ec4 @ 0x100a7ec4 */

undefined4 FUN_100a7ec4(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = DAT_100a7f60;
  iVar1 = DAT_100a7f5c;
  *DAT_100a7f60 = DAT_100a7f5c;
  FUN_1011ea48(iVar1,0,0x38);
  FUN_1013c856();
  FUN_100a78ac(DAT_100a7f64,*piVar2 + 0x2c);
  uVar3 = DAT_100a7f68;
  *(undefined1 *)(*piVar2 + 0x2a) = *(undefined1 *)(*piVar2 + 0x2c);
  FUN_100a78ac(uVar3);
  FUN_100a78ac(DAT_100a7f6c,*piVar2 + 0x2d);
  FUN_100a78ac(DAT_100a7f70,*piVar2 + 0x2e);
  FUN_100a78ac(DAT_100a7f74,*piVar2 + 0x33);
  FUN_100a78ac(DAT_100a7f78,*piVar2 + 0x34);
  FUN_100a78ac(DAT_100a7f7c,*piVar2 + 0x2f);
  FUN_100a78ac(DAT_100a7f80,*piVar2 + 0x30);
  FUN_100a78ac(DAT_100a7f84,*piVar2 + 0x32);
  FUN_100a78ac(DAT_100a7f88,*piVar2 + 0x36);
  FUN_100a78ac(DAT_100a7f8c,*piVar2 + 0x35);
  FUN_10064254();
  FUN_1006405c();
  return 0;
}

