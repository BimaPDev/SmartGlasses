/* FUN_10132bee @ 0x10132bee */

undefined4 FUN_10132bee(undefined2 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  longlong lVar5;
  
  puVar4 = (uint *)(param_1 + 2);
  if ((int)(*puVar4 << 0x1c) < 0) {
    uVar3 = 0xfffffff0;
  }
  else if (*(byte *)(param_1 + 5) < 4) {
    lVar5 = FUN_100c43c8();
    if (lVar5 == 0x300000003) {
      uVar3 = 0xffffffea;
    }
    else {
      iVar1 = FUN_100c5d4c(0x411,2);
      if (iVar1 != 0) {
        puVar2 = (undefined2 *)FUN_100c1fe4(iVar1 + 8,2);
        *puVar2 = *param_1;
        *puVar4 = *puVar4 | 0x20;
        uVar3 = FUN_100c5e48(0x411,iVar1,0);
        return uVar3;
      }
      uVar3 = 0xffffff97;
    }
  }
  else {
    uVar3 = 0xffffff7a;
  }
  return uVar3;
}

