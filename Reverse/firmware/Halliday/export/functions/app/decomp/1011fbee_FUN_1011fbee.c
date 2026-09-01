/* FUN_1011fbee @ 0x1011fbee */

undefined4 FUN_1011fbee(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = (uint *)**(undefined4 **)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x10);
  *(undefined2 *)(iVar5 + 0x4e) = 0;
  *(short *)(iVar5 + 0x4c) = (short)param_2;
  FUN_10055be0(0x13);
  cVar1 = *(char *)(iVar5 + 2);
  if ((cVar1 != '\0') && ((int)(*puVar4 << 8) < 0)) {
    *puVar4 = *puVar4 & 0xff7fffff;
  }
  uVar3 = 0;
  uVar2 = 0;
  do {
    if ((int)((param_2 >> (uVar3 & 0xff)) << 0x1f) < 0) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0xc);
  *puVar4 = uVar2 | *puVar4;
  *puVar4 = *puVar4 | 0x800000;
  puVar4[2] = puVar4[2];
  if (cVar1 == '\0') {
    uVar2 = 0;
    uVar3 = 0;
    do {
      if ((int)((param_2 >> (uVar3 & 0xff)) << 0x1f) < 0) {
        uVar2 = uVar2 | 1 << (uVar3 & 0xff) & 0xffffU;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0xc);
    puVar4[1] = uVar2;
  }
  return 0;
}

