/* FUN_2c489b5c @ 0x2c489b5c */

void FUN_2c489b5c(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  piVar1 = DAT_2c489bb8;
  if (*DAT_2c489bb4 != '\0') {
    if (*DAT_2c489bb8 != 0) {
      iVar4 = FUN_2c485890();
      puVar3 = DAT_2c489bc0;
      puVar2 = DAT_2c489bbc;
      for (; iVar5 = FUN_2c4858a8(*piVar1), iVar4 != iVar5; iVar4 = FUN_2c4858c0(iVar4)) {
        if (((iVar4 != 0) && (*(undefined4 **)(iVar4 + 4) != (undefined4 *)0x0)) &&
           (pcVar6 = (code *)**(undefined4 **)(iVar4 + 4), pcVar6 != (code *)0x0)) {
          (*pcVar6)(*puVar3,*puVar2);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xa3,DAT_2c489bcc,DAT_2c489bc8,DAT_2c489bc4);
}

