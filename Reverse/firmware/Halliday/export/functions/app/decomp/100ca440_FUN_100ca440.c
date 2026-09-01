/* FUN_100ca440 @ 0x100ca440 */

undefined4 FUN_100ca440(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  
  cVar1 = *(char *)(param_1 + 2);
  *param_2 = cVar1;
  cVar2 = *(char *)(param_1 + 3);
  param_2[1] = cVar2;
  bVar3 = *(byte *)(param_1 + 8);
  param_2[2] = bVar3;
  if (cVar1 == '\x01') {
    *(int *)(param_2 + 8) = param_1 + 0x90;
    *(uint *)(param_2 + 4) = (uint)bVar3 * 7 + DAT_100ca49c;
    if (cVar2 == '\0') {
      *(int *)(param_2 + 0xc) = param_1 + 0x97;
      *(int *)(param_2 + 0x10) = param_1 + 0x9e;
    }
    else {
      *(int *)(param_2 + 0xc) = param_1 + 0x9e;
      *(int *)(param_2 + 0x10) = param_1 + 0x97;
    }
    *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)(param_1 + 0xa6);
    *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 0xac);
    *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_1 + 0xae);
  }
  else {
    if (cVar1 != '\x02') {
      return 0xffffffea;
    }
    *(int *)(param_2 + 4) = param_1 + 0x90;
  }
  return 0;
}

