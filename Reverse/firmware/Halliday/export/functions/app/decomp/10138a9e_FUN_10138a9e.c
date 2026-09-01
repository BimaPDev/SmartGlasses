/* FUN_10138a9e @ 0x10138a9e */

void FUN_10138a9e(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = (uint)param_1[1];
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 < *param_1) {
      uVar2 = *param_1 - uVar1;
      puVar4 = param_1 + 2;
      do {
        uVar3 = uVar3 + 1 & 0xffff;
        *(undefined1 *)puVar4 = *(undefined1 *)((int)puVar4 + uVar1);
        puVar4 = (ushort *)((int)puVar4 + 1);
      } while ((uVar2 & 0xffff) != uVar3);
      *param_1 = (ushort)uVar2;
      param_1[1] = 0;
    }
    else {
      param_1[1] = 0;
      *param_1 = 0;
    }
  }
  return;
}

