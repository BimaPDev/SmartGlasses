/* FUN_1013790c @ 0x1013790c */

void FUN_1013790c(int param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x41) != '\b') {
    *(undefined1 *)(param_1 + 0x41) = 8;
    FUN_1013cb84();
    if ((*(int *)(param_1 + 0x34) != 0) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0x34) + 4), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    *(undefined1 *)(param_1 + 0x41) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  return;
}

