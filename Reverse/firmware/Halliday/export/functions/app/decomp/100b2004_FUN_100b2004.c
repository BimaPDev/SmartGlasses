/* FUN_100b2004 @ 0x100b2004 */

undefined4 FUN_100b2004(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined2 *)thunk_FUN_1009f30c(0x30,DAT_100b205c);
  if (puVar2 == (undefined2 *)0x0) {
    uVar3 = 0xfffffff4;
  }
  else {
    *puVar2 = 0x120;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar2 + 4) = 0x24;
    *(undefined4 *)(puVar2 + 8) = 6;
    puVar1 = DAT_100b2060;
    *(undefined4 *)(puVar2 + 6) = param_2;
    puVar4 = (undefined4 *)(puVar2 + 10);
    puVar5 = puVar1;
    do {
      puVar6 = puVar5 + 1;
      *puVar4 = *puVar5;
      puVar4 = puVar4 + 1;
      puVar5 = puVar6;
    } while (puVar6 != puVar1 + 7);
    uVar3 = FUN_10064d1c(param_1,puVar2);
    FUN_1012d1f4(puVar2);
  }
  return uVar3;
}

