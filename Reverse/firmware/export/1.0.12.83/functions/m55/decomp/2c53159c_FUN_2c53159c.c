/* FUN_2c53159c @ 0x2c53159c */

undefined1 * FUN_2c53159c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined1 *)FUN_2c47245c(0,0x20);
  FUN_2c674268(puVar1,0,0x20);
  if (param_1 != 0) {
    uVar2 = FUN_2c66c4ec(param_1);
    if (0x13 < uVar2) {
      uVar2 = 0x14;
    }
    *puVar1 = (char)uVar2;
    FUN_2c66c568(puVar1 + 1,param_1);
  }
  FUN_2c531520(puVar1,param_2);
  return puVar1;
}

