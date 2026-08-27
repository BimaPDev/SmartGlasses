/* FUN_2c5e80a0 @ 0x2c5e80a0 */

void FUN_2c5e80a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  iVar1 = FUN_2c5e7270(4,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5e818c,0x24,DAT_2c5e8188,DAT_2c5e819c);
  }
  bVar5 = *(byte *)(iVar1 + 0x34);
  if ((bVar5 & 0xfd) != 1) {
    puVar2 = (undefined4 *)(**(code **)(DAT_2c5e8180 + 0x20))(0);
    iVar3 = FUN_2c606b94(*puVar2,1);
    if (iVar3 == 0) {
      if (param_1 == 0xd2) {
        if (*(char *)(iVar1 + 0x41) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,DAT_2c5e818c,0x30,DAT_2c5e8188,DAT_2c5e81a0);
        }
        uVar4 = 1;
        *(undefined1 *)(iVar1 + 0x40) = 1;
      }
      else {
        if (param_1 != 0xd3) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5e818c,0x3d,DAT_2c5e8188,DAT_2c5e8184,param_1);
        }
        if (*(char *)(iVar1 + 0x41) == '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,DAT_2c5e818c,0x37,DAT_2c5e8188,DAT_2c5e81a4);
        }
        *(undefined1 *)(iVar1 + 0x40) = 0;
        uVar4 = 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5e818c,0x1d,DAT_2c5e8198,DAT_2c5e8194,uVar4);
    }
    bVar5 = *(byte *)(iVar1 + 0x34);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5e818c,0x29,DAT_2c5e8188,DAT_2c5e8190,bVar5);
}

