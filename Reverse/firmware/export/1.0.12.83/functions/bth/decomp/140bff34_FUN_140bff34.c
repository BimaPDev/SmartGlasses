/* FUN_140bff34 @ 0x140bff34 */

void FUN_140bff34(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = FUN_140db6f0(param_1);
    if (iVar1 != 0) {
      return;
    }
    pcVar2 = (code *)FUN_140d7f28();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140da8b8();
}

