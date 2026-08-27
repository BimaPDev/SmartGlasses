/* FUN_14058450 @ 0x14058450 */

undefined4 FUN_14058450(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  byte bVar4;
  
  puVar3 = (undefined2 *)FUN_1406db30(0x2032,8);
  if (puVar3 != (undefined2 *)0x0) {
    uVar2 = FUN_1405c2b0(param_1);
    *puVar3 = uVar2;
    bVar4 = *(char *)(param_2 + 0x18) == '\0';
    *(byte *)(puVar3 + 1) = bVar4;
    if (*(char *)(param_2 + 0x19) == '\0') {
      bVar4 = bVar4 | 2;
    }
    *(byte *)(puVar3 + 1) = bVar4;
    *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(param_2 + 0x19);
    *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)(param_2 + 0x18);
    uVar1 = DAT_140584a4;
    puVar3[3] = (ushort)*(byte *)(param_2 + 0x1a);
    FUN_1406da30(puVar3,param_1 << 8 | 2,uVar1);
    return 0;
  }
  return 0x4b;
}

