/* FUN_10136f60 @ 0x10136f60 */

void FUN_10136f60(void)

{
  int iVar1;
  
  iVar1 = FUN_100dd61c();
  if ((iVar1 != 0) && (*(code **)(iVar1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10136f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x18))(3,*(undefined1 *)(iVar1 + 4),0);
    return;
  }
  return;
}

