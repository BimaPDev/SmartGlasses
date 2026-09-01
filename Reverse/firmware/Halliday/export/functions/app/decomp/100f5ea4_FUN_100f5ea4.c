/* FUN_100f5ea4 @ 0x100f5ea4 */

undefined4 * FUN_100f5ea4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)FUN_100e825c(0x10);
  uVar3 = DAT_100f5eec;
  uVar2 = DAT_100f5ee8;
  uVar1 = DAT_100f5ee4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = uVar1;
    puVar4[2] = uVar3;
    puVar4[3] = uVar2;
    return puVar4;
  }
  FUN_100a5b78((DAT_100f5ef4 - DAT_100f5ef0) * 0x20 & 0xff00U | 0x3f0011,DAT_100f5efc,DAT_100f5ef8);
  return (undefined4 *)0x0;
}

