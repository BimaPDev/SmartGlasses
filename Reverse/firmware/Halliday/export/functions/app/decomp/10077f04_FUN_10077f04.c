/* FUN_10077f04 @ 0x10077f04 */

undefined4 FUN_10077f04(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint local_14;
  
  iVar3 = 0;
  local_14 = param_2 & 0xffff0000;
  iVar1 = FUN_10112e84(DAT_10077f70);
  puVar4 = DAT_10077f78;
  if (iVar1 == 0) {
    FUN_10119dc2(DAT_10077f74);
    uVar2 = 0xffffffff;
  }
  else {
    do {
      local_14 = CONCAT22(local_14._2_2_,*puVar4);
      iVar3 = iVar3 + 1;
      FUN_1011fa42(iVar1,&local_14,2,*(undefined1 *)((int)puVar4 + 1),param_1);
      FUN_1011fa80(1);
      puVar4 = puVar4 + 1;
    } while (iVar3 != 9);
    FUN_10077e14(0);
    FUN_100a5b78(DAT_10077f84 | (DAT_10077f80 - DAT_10077f7c) * 0x20 & 0xff00U,DAT_10077f8c,
                 DAT_10077f88);
    uVar2 = 0;
  }
  return uVar2;
}

