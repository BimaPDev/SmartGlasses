/* FUN_140834b4 @ 0x140834b4 */

void FUN_140834b4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1408ad70(*(undefined4 *)(param_1 + 8),param_2,param_3,0);
  if ((param_3 != 0) && (param_2 != 0xbb)) {
    param_2 = 0xba;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x47,uRam14083658,uVar1,*(undefined4 *)(param_1 + 0x20),
               *(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x30),param_2,
               *(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19));
}

