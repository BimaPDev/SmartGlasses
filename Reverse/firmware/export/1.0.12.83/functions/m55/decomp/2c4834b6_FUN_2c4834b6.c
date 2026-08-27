/* FUN_2c4834b6 @ 0x2c4834b6 */

/* WARNING: Removing unreachable block (ram,0x2c483550) */
/* WARNING: Removing unreachable block (ram,0x2c483556) */
/* WARNING: Removing unreachable block (ram,0x2c483458) */
/* WARNING: Removing unreachable block (ram,0x2c483466) */
/* WARNING: Removing unreachable block (ram,0x2c4833fa) */
/* WARNING: Removing unreachable block (ram,0x2c483404) */
/* WARNING: Removing unreachable block (ram,0x2c4835c8) */

bool FUN_2c4834b6(void)

{
  undefined2 uVar1;
  int iVar2;
  uint unaff_r5;
  int unaff_r6;
  
  if (2 < unaff_r5) {
    uVar1 = *(undefined2 *)(unaff_r6 + 0x1e);
    if (SBORROW4(unaff_r5,0x62)) {
                    /* WARNING: Subroutine does not return */
      TRACE(0,0x162,uRam2c4834cc,uRam2c4834d0);
    }
    if (-1 < (int)(unaff_r5 - 0xc4)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x32,DAT_2c483548,DAT_2c483544,DAT_2c483540,DAT_2c483538,DAT_2c48353c);
    }
    iVar2 = FUN_2c66b624(uVar1,DAT_2c48354c);
    if (iVar2 == 0) {
      return (bool)2;
    }
    iVar2 = FUN_2c66b624(uVar1,uRam2c483550);
    if (iVar2 != 0) {
      iVar2 = FUN_2c66b624(uVar1,uRam2c483554);
      return iVar2 == 0;
    }
  }
  return (bool)3;
}

