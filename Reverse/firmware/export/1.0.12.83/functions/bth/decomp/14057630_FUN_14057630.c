/* FUN_14057630 @ 0x14057630 */

undefined4 FUN_14057630(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_14073fdc(400,2,param_3,param_4,param_4);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined1 *)(param_1 + 0x42);
    FUN_140e5658(puVar2,0,400);
    *(undefined4 **)(param_1 + 0x50) = puVar2;
    *puVar2 = param_2;
    *(undefined1 *)(puVar2 + 0x61) = uVar1;
    *(byte *)((int)puVar2 + 0x189) = *(byte *)((int)puVar2 + 0x189) | 0x40;
    *(undefined1 *)((int)puVar2 + 0x18b) = 0xff;
    puVar2[3] = *(undefined4 *)(param_1 + 0x3c);
    FUN_14058974(puVar2 + 1,uVar1,0);
    return 0;
  }
  return 0x4b;
}

