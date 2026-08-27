/* FUN_2c4c4030 @ 0x2c4c4030 */

bool FUN_2c4c4030(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  puVar1 = DAT_2c4c40c8;
  if (4 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c40e4,DAT_2c4c40e0,param_1);
  }
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c40e8,DAT_2c4c40e0,param_2);
  }
  FUN_2c644044(*DAT_2c4c40c8,0xffffffff);
  iVar3 = param_2 * 0x9c + param_1 * 0x138 + DAT_2c4c40cc;
  uVar2 = (uint)*(byte *)(iVar3 + 2);
  if (-1 < (int)(uVar2 << 0x1e)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9a5,DAT_2c4c40dc,DAT_2c4c40d8,DAT_2c4c40d4,DAT_2c4c40d0,uVar2);
  }
  bVar4 = *(char *)(iVar3 + 3) == '\x02';
  if (bVar4) {
    FUN_2c4b5cfc(param_2,param_3,param_4);
  }
  FUN_2c4b9448(param_2,param_4);
  FUN_2c644080(*puVar1);
  return !bVar4;
}

