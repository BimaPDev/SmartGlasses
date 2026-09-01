/* FUN_1011f442 @ 0x1011f442 */

void FUN_1011f442(undefined1 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_3 < 4) {
    uVar4 = (param_3 - 1) * 8;
  }
  else {
    uVar4 = 0x18;
  }
  puVar2 = param_1;
  while (param_1 + param_3 != puVar2) {
    uVar1 = uVar4 & 0xff;
    uVar4 = uVar4 - 8;
    bVar5 = (int)uVar4 < 0;
    if (bVar5) {
      uVar4 = 0x18;
    }
    puVar3 = puVar2 + 1;
    *puVar2 = (char)(*param_2 >> uVar1);
    puVar2 = puVar3;
    if (bVar5) {
      param_2 = param_2 + 1;
    }
  }
  return;
}

