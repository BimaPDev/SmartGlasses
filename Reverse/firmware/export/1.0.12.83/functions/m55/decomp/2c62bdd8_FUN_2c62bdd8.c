/* FUN_2c62bdd8 @ 0x2c62bdd8 */

undefined4 * FUN_2c62bdd8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)FUN_2c62c938(DAT_2c62be10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_2;
    puVar2[4] = 0xffffffff;
    puVar2[2] = param_1;
    *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xfe;
    uVar3 = FUN_2c629df4();
    puVar1 = DAT_2c62be14;
    puVar2[1] = uVar3;
    puVar2[3] = param_3;
    *puVar1 = 1;
  }
  return puVar2;
}

