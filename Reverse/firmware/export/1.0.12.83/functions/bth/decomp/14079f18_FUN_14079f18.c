/* FUN_14079f18 @ 0x14079f18 */

undefined4 FUN_14079f18(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  
  FUN_140755e4();
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar3 = FUN_140e5658(param_1 + 0xd0,0,0x40);
  *(undefined1 *)(param_1 + 0xd1) = 0x48;
  *(undefined1 *)(param_1 + 0xd2) = 0x7c;
  bVar6 = (byte)param_2;
  if (param_3 == 0) {
    bVar6 = bVar6 | 0x80;
  }
  *(byte *)(param_1 + 0xd3) = bVar6;
  puVar2 = DAT_14079fe4;
  if ((param_2 & 0xffffff7f) == 0x17e) {
    uVar5 = 10;
    uVar1 = *(undefined1 *)(DAT_14079fe4 + 1);
    *(undefined2 *)(param_1 + 0xd5) = *DAT_14079fe4;
    *(undefined1 *)(param_1 + 0xd7) = uVar1;
    *(undefined1 *)(param_1 + 0xd4) = 5;
  }
  else {
    uVar5 = 5;
    if ((param_2 & 0xff7f) == 0x27e) {
      *(undefined1 *)(param_1 + 0xd4) = 5;
      uVar1 = *(undefined1 *)(puVar2 + 1);
      *(undefined2 *)(param_1 + 0xd5) = *puVar2;
      *(undefined1 *)(param_1 + 0xd9) = 1;
      uVar5 = 10;
      *(undefined1 *)(param_1 + 0xd7) = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  uVar7 = (*(byte *)(param_1 + 0x1e) >> 4) + 1 & 0xf;
  uVar4 = DAT_14079fe0 | uVar7 << 4;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(uint *)(param_1 + 0x4c) = uVar4;
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) & 0xf | (byte)(uVar7 << 4);
  uVar3 = FUN_14079ebc(param_1 + 8,param_1 + 0x44);
  FUN_1407561c();
  return uVar3;
}

