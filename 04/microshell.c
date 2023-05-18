/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:15:06 by alvachon          #+#    #+#             */
/*   Updated: 2023/05/16 14:48:19 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef struct s_data
{
	char	*executable_that_failed;
	char	*path_to_change;
	int		shell;
	int		ac;
	char	**av;
	int		i;
	int		cmd;
}	t_data;

typedef struct s_node
{
	int				index;
	char			*built;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

enum	e_code
{
	FATAL,
	EXECVE,

};

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	print_error(e_code code)
{
	if (code == FATAL)
		write(2, "error: fatal", 12);
	else if (e_code == EXECVE)
	{
		write(2, "error: cannot execute ", 22);
		write(2, executable_that_failed, ft_strlen(executable_that_failed));
	}
	else if (code == PATH)
	{
		write(2, "error: cannot execute ", 22);
		write(2, path_to_change, ft_strlen(path_to_change));
	}
	write(2, "\n", 1);
	return (1);
}

t_data	*init_shell(int ac, char **av)
{
	shell.executable_that_failed = NULL;
	shell.path_to_change = NULL;
	shell.shell = 1;
	shell.ac = ac;
	shell.av = av;
	shell.cmd = 1;
	return (shell);
}

t_node	*make_process(t_node *job, t_data *shell char **env)
{
	if (job == NULL)
	{
		job->index = 1;
		if (access(job->av[job->index], F_OK))
			job->built = job->av[job->index];
		else if (job->av[job->index][0] == 'c' && job->av[job->index][1] == 'd')
			job->built = job->av[job->index];
		else
			print_error(FATAL);
	}
	while (job->av[job->index][0] != ';')
	{
		if (job->built)
		{
			job->index++;
			if ()
		}
	}
	return (node);
}

int	main(int ac, char **av, char **env)
{
	t_data	*shell;
	t_node	*job;

	if (ac > 1)
	{
		shell = init_shell(ac, av);
		while (shell->cmd > 0)
		{//cmd will do +1 if he see an another cmd
			job = NULL;
			job = make_process(job, shell, env);
			execute_job(job);
			shell->cmd--;
		}
	}
	else
		return (print_error(FATAL));
}
