/* FUN_101389fa @ 0x101389fa */

undefined4 FUN_101389fa(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r3;
  undefined4 local_24;
  undefined1 auStack_20 [3];
  undefined1 local_1d;
  undefined1 local_19;
  undefined1 local_15;
  undefined1 local_11;
  
  iVar3 = FUN_100e4bd8();
  if (iVar3 != 0) {
    local_24 = 0;
    FUN_1011ea48(auStack_20,0,0x10,in_r3);
    iVar1 = FUN_1013871c(iVar3,0,1,0x20);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      FUN_101327da(iVar1 + 8,0x1d);
      FUN_101386a0(iVar1,&local_24,8);
      FUN_101386a6(iVar1,5);
      local_24 = CONCAT13(1,(undefined3)local_24);
      local_1d = 2;
      local_19 = 3;
      local_15 = 6;
      local_11 = 7;
      FUN_101386a0(iVar1,&local_24,0x14);
      uVar2 = FUN_100e40e4(iVar3,iVar1);
    }
    return uVar2;
  }
  return 0xfffffffb;
}

